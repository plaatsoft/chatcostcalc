/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created: Wed 27. Oct 19:24:08 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QTimeEdit *timeEdit;
    QLabel *label_28;
    QPushButton *holdButton;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QDial *dial;
    QWidget *tab_3;
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QWidget *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->setEnabled(true);
        Calc->resize(530, 211);
        tabWidget = new QTabWidget(Calc);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 511, 191));
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 10, 221, 71));
        QFont font;
        font.setPointSize(30);
        pushButton->setFont(font);
        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 221, 71));
        lcdNumber->setLineWidth(1);
        lcdNumber->setMidLineWidth(0);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setNumDigits(8);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(0));
        timeEdit = new QTimeEdit(tab);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);
        timeEdit->setGeometry(QRect(10, 100, 221, 71));
        QFont font1;
        font1.setPointSize(35);
        timeEdit->setFont(font1);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(true);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(20, 10, 41, 61));
        QFont font2;
        font2.setPointSize(40);
        label_28->setFont(font2);
        holdButton = new QPushButton(tab);
        holdButton->setObjectName(QString::fromUtf8("holdButton"));
        holdButton->setGeometry(QRect(250, 100, 221, 71));
        holdButton->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 321, 161));
        tableWidget->setColumnCount(0);
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(350, 30, 71, 22));
        spinBox->setMaximum(20);
        spinBox_2 = new QSpinBox(tab_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(350, 150, 71, 22));
        spinBox_2->setMaximum(99999);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 130, 46, 13));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 10, 81, 16));
        dial = new QDial(tab_2);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(400, 60, 71, 81));
        dial->setMaximum(20);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 131, 101));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(0);
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 331, 151));
        tabWidget->addTab(tab_3, QString());
        QWidget::setTabOrder(timeEdit, pushButton);

        retranslateUi(Calc);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QWidget *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Calc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Calc", "Start", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("Calc", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        holdButton->setText(QApplication::translate("Calc", "Pause", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Calc", "General", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Calc", "Total Cost", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Calc", "Total Members", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Calc", "Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Calc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Chat Cost Calcuator</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This tool calculate real-time the cost of a chat or meeting.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Created by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Willem van der Plaat</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Martijn Stalenhoef</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Marius Hoekenga</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">All Copyrights"
                        " reserved (c) 2008-2010 PlaatSoft</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Calc", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
