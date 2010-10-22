#include "calc.h"
#include "ui_calc.h"

#include "QtGui"

// -----------------------------------------
// Constructor & Destructor
// -----------------------------------------

Calc::Calc(QWidget *parent) : QWidget(parent), ui(new Ui::Calc)
{
    ui->setupUi(this);

    setWindowTitle("Chat Cost Calculator v0.1");

    // Set fix windows form size.
    setMinimumSize(640,480);
    setMaximumSize(640,480);

    // Read registry setting data
    readSettings();

    start=false;
    counter=0;

    // Add background screen
    scene = new QGraphicsScene();
    scene->addPixmap(QPixmap(":/images/logo.png"));
    ui->graphicsView->setScene(scene);

    // Init statemachine
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(statemachine()));
    timer->start(1000);
}

Calc::~Calc()
{
    delete ui;
}

// -----------------------------------------
// Other
// -----------------------------------------

void Calc::statemachine() {
   if (start) {
     counter++;
     int total=0;

     if (ui->checkBox->checkState()) {
         total+=ui->spinBox->value();
     }
     if (ui->checkBox_2->checkState()) {
        total+=ui->spinBox_2->value();
     }
     if (ui->checkBox_3->checkState()) {
        total+=ui->spinBox_3->value();
     }
     if (ui->checkBox_4->checkState()) {
        total+=ui->spinBox_4->value();
     }
     if (ui->checkBox_5->checkState()) {
        total+=ui->spinBox_5->value();
     }
     if (ui->checkBox_6->checkState()) {
        total+=ui->spinBox_6->value();
     }
     if (ui->checkBox_7->checkState()) {
        total+=ui->spinBox_7->value();
     }
     if (ui->checkBox_8->checkState()) {
        total+=ui->spinBox_8->value();
     }
     if (ui->checkBox_9->checkState()) {
        total+=ui->spinBox_9->value();
     }
     sum+= total * (1/3600.0);

     qDebug() << "total" << total << "counter" << counter << "sum" << sum;

     ui->lcdNumber->display(sum);
     ui->timeEdit->setTime(time->addSecs(counter));
   }
}

/**
 * Read settings out Windows registry
 */
void Calc::readSettings()
{
    // Fetch previous window position
    QSettings settings("PlaatSoft", "ChatCostCalc");
    ui->lineEdit->setText(settings.value("name1", "").toString());
    ui->lineEdit_2->setText(settings.value("name2", "").toString());
    ui->lineEdit_3->setText(settings.value("name3", "").toString());
    ui->lineEdit_4->setText(settings.value("name4", "").toString());
    ui->lineEdit_5->setText(settings.value("name5", "").toString());
    ui->lineEdit_6->setText(settings.value("name6", "").toString());
    ui->lineEdit_7->setText(settings.value("name7", "").toString());
    ui->lineEdit_8->setText(settings.value("name8", "").toString());
    ui->lineEdit_9->setText(settings.value("name9", "").toString());

    ui->spinBox->setValue(settings.value("cost1", "").toInt());
    ui->spinBox_2->setValue(settings.value("cost2", "").toInt());
    ui->spinBox_3->setValue(settings.value("cost3", "").toInt());
    ui->spinBox_4->setValue(settings.value("cost4", "").toInt());
    ui->spinBox_5->setValue(settings.value("cost5", "").toInt());
    ui->spinBox_6->setValue(settings.value("cost6", "").toInt());
    ui->spinBox_7->setValue(settings.value("cost7", "").toInt());
    ui->spinBox_8->setValue(settings.value("cost8", "").toInt());
    ui->spinBox_9->setValue(settings.value("cost9", "").toInt());

    qDebug() << "Load settings";
}

/**
 * Write settings to Windows registry
 */
void Calc::writeSettings()
{
    // Store current window position
    QSettings settings("PlaatSoft", "ChatCostCalc");
    settings.setValue("name1", ui->lineEdit->text());
    settings.setValue("name2", ui->lineEdit_2->text());
    settings.setValue("name3", ui->lineEdit_3->text());
    settings.setValue("name4", ui->lineEdit_4->text());
    settings.setValue("name5", ui->lineEdit_5->text());
    settings.setValue("name6", ui->lineEdit_6->text());
    settings.setValue("name7", ui->lineEdit_7->text());
    settings.setValue("name8", ui->lineEdit_8->text());
    settings.setValue("name9", ui->lineEdit_9->text());

    settings.setValue("cost1", ui->spinBox->value());
    settings.setValue("cost2", ui->spinBox_2->value());
    settings.setValue("cost3", ui->spinBox_3->value());
    settings.setValue("cost4", ui->spinBox_4->value());
    settings.setValue("cost5", ui->spinBox_5->value());
    settings.setValue("cost6", ui->spinBox_6->value());
    settings.setValue("cost7", ui->spinBox_7->value());
    settings.setValue("cost8", ui->spinBox_8->value());
    settings.setValue("cost9", ui->spinBox_9->value());

    qDebug() << "Write settings";
}

// -----------------------------------------
// User Actions
// -----------------------------------------

void Calc::on_pushButton_clicked()
{
   if (start) {
      start=false;
      ui->pushButton->setText("Start");

   } else {
      start=true;
      counter=0;
      sum=0;
      time=new QTime(0,0,0,0);
      ui->pushButton->setText("Stop");
      ui->lcdNumber->display(counter);
   }
}

/**
 * Close Window
 */
void Calc::closeEvent(QCloseEvent *event)
{
   // Store current window position
   writeSettings();
}

// -----------------------------------------
// The End
// -----------------------------------------
