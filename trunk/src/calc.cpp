/**
 *  @file
 *  @brief The file contain Calc methods
 *  @author wplaat
 *
 *  Copyright (C) 2008-2011 PlaatSoft
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 2.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "calc.h"
#include "ui_calc.h"
#include "general.h"

#include "QtGui"

// -----------------------------------------
// Constructor & Destructor
// -----------------------------------------

/**
 * Constructor
 */
Calc::Calc(QWidget *parent) : QWidget(parent), ui(new Ui::Calc)
{
    ui->setupUi(this);

    // Set Windows Title
    char tmp[100];
    sprintf(tmp,"%s v%s", APPL_NAME, APPL_VERSION);
    setWindowTitle(tmp);

    // Set fix windows form size.
    setMinimumSize(HORZ_SIZE,VERT_SIZE);
    setMaximumSize(HORZ_SIZE,VERT_SIZE);

    // Read registry setting data
    readSettings();

    start=false;
    pause=false;
    counter=0;
    ui->pauseButton->setEnabled(false);

    sprintf(tmp,"%0.2f",0.0);
    ui->lcdNumber->display(QString(tmp));

    // Add background screen
    scene = new QGraphicsScene();
    scene->addPixmap(QPixmap(":/images/logo.png"));
    ui->graphicsView->setScene(scene);

    ui->timeEdit->setStyleSheet("QTimeEdit { background-color:#ffffff;color:#000000 }");

    // Init statemachine
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(statemachine()));
    timer->start(190);

    // Initi Netwokr layer
    initNetwork();
}

/**
 * Destructor
 */
Calc::~Calc()
{
    delete ui;
}

// -----------------------------------------
// Other
// -----------------------------------------

/**
 * State Machine is executed every second
 */
void Calc::statemachine() {

   // If start calculate cost of second.
   if (start) {
     counter++;
     int total=0;
     bool ok;

     if (!pause) {

        // Get all hour values
        for (int i=0;i<ui->spinBox->value();i++) {

            if (ui->tableWidget->item(i, 0)->checkState()) {
               total+=ui->tableWidget->item(i,1)->text().toInt(&ok,10);
            }
         }
         sum+= total * (1/36000.0);
         qDebug() << "total" << total << "counter" << counter << "sum" << sum;
      }

      // Update real-time cost on screen
      char tmp[10];
      sprintf(tmp,"%0.2f",sum);
      ui->lcdNumber->display(QString(tmp));

      // Check max cost limit
      if (sum>=ui->maxCostSpinBox->value() && (ui->maxCostSpinBox->value()!=0)) {
         ui->lcdNumber->setStyleSheet("QLCDNumber { background-color:#ff0000; }");
         ui->timeEdit->setStyleSheet("QTimeEdit { background-color:#ff0000;color:#000000 }");
      }

      // Update time on screen
      ui->timeEdit->setTime(time->addSecs(counter/5));

      // Play sound effect if actived.
      if (!pause && ui->SoundcheckBox->checkState() && (counter%10==0)) {
           QSound::play("snd/cash1.wav");
      }
   }
}

/**
 * Read settings out Windows registry
 */
void Calc::readSettings()
{
    // Fetch previous window position
    QSettings settings("PlaatSoft", APPL_NAME);

    // Load location setting
    QPoint pos = settings.value("pos", QPoint(200, 200)).toPoint();
    move(pos);

    // Load sound effect settig
    bool sound = settings.value("sound", true).toBool();
    ui->SoundcheckBox->setChecked(sound);

    // Load Amount of member setting
    int value = settings.value("amount", "0").toInt();
    ui->spinBox->setValue(value);
    on_spinBox_valueChanged(value);

    // Load Max Cost setting
    value = settings.value("total", "0").toInt();
    ui->maxCostSpinBox->setValue(value);

    qDebug() << "Load settings";
}

/**
 * Write settings to Windows registry
 */
void Calc::writeSettings()
{
    bool ok;

    QSettings settings("PlaatSoft", APPL_NAME);

    // Store grid data
    for (int i=0; i<ui->spinBox->value(); i++) {

       QString key = QString("name%1").arg(i+1);
       settings.setValue(key, ui->tableWidget->item(i,0)->text());

       key = QString("cost%1").arg(i+1);
       settings.setValue(key, ui->tableWidget->item(i,1)->text().toInt(&ok,10));
    }

    // Store other settings
    settings.setValue("sound",ui->SoundcheckBox->checkState());
    settings.setValue("amount", ui->spinBox->value());
    settings.setValue("total", ui->maxCostSpinBox->value());
    settings.setValue("pos", pos());

    qDebug() << "Write settings";
}

// -----------------------------------------
// User Actions
// -----------------------------------------

/**
 * Start & Stop button click event
 */

void Calc::on_startButton_clicked()
{
   if (start) {
      start=false;
      ui->startButton->setText("Start");

      ui->pauseButton->setEnabled(false);
      pause=false;
      ui->pauseButton->setText("Pause");

   } else {
      start=true;
      counter=0;
      sum=0;
      time=new QTime(0,0,0,0);
      ui->pauseButton->setEnabled(true);

      ui->startButton->setText("Stop");

      char tmp[10];
      sprintf(tmp,"%0.2f",0.0);
      ui->timeEdit->setTime(time->addSecs(counter));
      ui->lcdNumber->display(QString(tmp));
      ui->lcdNumber->setStyleSheet("QLCDNumber { background-color:#ffffff; }");
      ui->timeEdit->setStyleSheet("QTimeEdit { background-color:#ffffff;color:#000000 }");
   }
}

/**
 * Pause & continue button click event
 */
void Calc::on_pauseButton_clicked()
{
   if (pause) {
       ui->pauseButton->setText("Pause");
      pause=false;
   } else {
      ui->pauseButton->setText("Continue");
      pause=true;
   }
}

/**
 * Amount of members Spinbox on change event
 */
void Calc::on_spinBox_valueChanged(int value)
{
   // Set table dimensions
   ui->tableWidget->setColumnCount(2);
   ui->tableWidget->setRowCount(value);

    QTableWidgetItem *item;

   // Build Header
   ui->tableWidget->setColumnWidth(0,170);
   item = new QTableWidgetItem("Member Name");
   ui->tableWidget->setHorizontalHeaderItem(0, item);

   ui->tableWidget->setColumnWidth(1,90);
   item = new QTableWidgetItem("Member Cost");
   ui->tableWidget->setHorizontalHeaderItem(1, item);

   QSettings settings("PlaatSoft", APPL_NAME);

   // Build Content
   for (int i=0; i<value; i++)
   {
      QString key = QString("name%1").arg(i+1);
      item = new QTableWidgetItem(settings.value(key, "").toString());
      item->setCheckState(Qt::Checked);
      ui->tableWidget->setItem(i, 0, item);

      key = QString("cost%1").arg(i+1);
      item = new QTableWidgetItem(settings.value(key, "").toString());
      ui->tableWidget->setItem(i, 1, item);
   }

   ui->dial->setValue(value);
}


/**
 * Max Cost Value change event
 */
void Calc::on_maxCostSpinBox_valueChanged(int )
{
   ui->lcdNumber->setStyleSheet("QLCDNumber { background-color:#ffffff; }");
   ui->timeEdit->setStyleSheet("QTimeEdit { background-color:#ffffff;color:#000000 }");
}

/**
 * Amount of members Dailer change event
 */
void Calc::on_dial_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    on_spinBox_valueChanged(value);
}

/**
 * Close Window
 */
void Calc::closeEvent(QCloseEvent *event)
{
   // Store current window position
   writeSettings();
}

// ------------------------------
// Network
// ------------------------------

/**
 * Start network
 */
void Calc::initNetwork(void)
{
   manager = new QNetworkAccessManager(this);

   connect( manager,
         SIGNAL(finished(QNetworkReply*)),
         this,
         SLOT(replyFinished(QNetworkReply*)) );

   fetchVersion();
}

/**
 * Process incoming http response
 */
void Calc::replyFinished(QNetworkReply *reply)
{
    QString bytesCount = QString::number( reply->bytesAvailable());
    QString result = reply->readAll();

    qDebug() << bytesCount << "Bytes received ";

    qDebug() << result;

    parseVersion(result);
}

/**
 * Create http request for version data.
 */
void Calc::fetchVersion()
{
    qDebug() << "fetchVersion enter";

    QNetworkRequest request;
    request.setUrl(QUrl("http://www.plaatsoft.nl/service/chatcostcalc.html"));

    manager->get(request);

    qDebug() << "fetchVersion leave ";
}

/**
 * Parse data for version information
 */
void Calc::parseVersion(QString response)
{
   qDebug() << response;

   QString text;
   int pos = response.indexOf("Version ");
   QString version = response.mid(pos+8,4).simplified();
   qDebug() << "Version = [" << version << "]";

   if (version.size()>0) {

       if (version.compare(APPL_VERSION)!=0) {

          text="ChatCostCalc v";
          text+=version;
          text+=" is available!<br>";
          text+="Check out http://www.plaatsoft.nl for more information.";

          QMessageBox::information(this, tr("New version available"),text);
       }
    }
}

// -----------------------------------------
// The End
// -----------------------------------------
