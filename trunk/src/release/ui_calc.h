/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created: Fri 22. Oct 20:46:57 2010
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
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QTimeEdit *timeEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;

    void setupUi(QWidget *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->setEnabled(true);
        Calc->resize(640, 480);
        spinBox = new QSpinBox(Calc);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(280, 30, 71, 21));
        QFont font;
        font.setPointSize(12);
        spinBox->setFont(font);
        spinBox->setMaximum(999);
        spinBox_2 = new QSpinBox(Calc);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(280, 80, 71, 21));
        spinBox_2->setFont(font);
        spinBox_2->setMaximum(999);
        spinBox_3 = new QSpinBox(Calc);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(280, 130, 71, 21));
        spinBox_3->setFont(font);
        spinBox_3->setMaximum(999);
        spinBox_4 = new QSpinBox(Calc);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(280, 180, 71, 21));
        spinBox_4->setFont(font);
        spinBox_4->setMaximum(999);
        spinBox_5 = new QSpinBox(Calc);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(280, 230, 71, 21));
        spinBox_5->setFont(font);
        spinBox_5->setMaximum(999);
        spinBox_6 = new QSpinBox(Calc);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(280, 280, 71, 21));
        spinBox_6->setFont(font);
        spinBox_6->setMaximum(999);
        spinBox_7 = new QSpinBox(Calc);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(280, 330, 71, 21));
        spinBox_7->setFont(font);
        spinBox_7->setMaximum(999);
        pushButton = new QPushButton(Calc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 380, 221, 71));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        lcdNumber = new QLCDNumber(Calc);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(440, 30, 171, 81));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setNumDigits(5);
        lcdNumber->setDigitCount(5);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        spinBox_8 = new QSpinBox(Calc);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setGeometry(QRect(280, 380, 71, 21));
        spinBox_8->setFont(font);
        spinBox_8->setMaximum(999);
        spinBox_9 = new QSpinBox(Calc);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setGeometry(QRect(280, 430, 71, 21));
        spinBox_9->setFont(font);
        spinBox_9->setMaximum(999);
        lineEdit = new QLineEdit(Calc);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 211, 21));
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(Calc);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 80, 211, 21));
        lineEdit_2->setFont(font);
        lineEdit_3 = new QLineEdit(Calc);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 130, 211, 21));
        lineEdit_3->setFont(font);
        lineEdit_4 = new QLineEdit(Calc);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 180, 211, 21));
        lineEdit_4->setFont(font);
        lineEdit_5 = new QLineEdit(Calc);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 230, 211, 21));
        lineEdit_5->setFont(font);
        lineEdit_6 = new QLineEdit(Calc);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(40, 280, 211, 21));
        lineEdit_6->setFont(font);
        lineEdit_7 = new QLineEdit(Calc);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(40, 330, 211, 21));
        lineEdit_7->setFont(font);
        lineEdit_8 = new QLineEdit(Calc);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 380, 211, 21));
        lineEdit_8->setFont(font);
        lineEdit_9 = new QLineEdit(Calc);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(40, 430, 211, 21));
        lineEdit_9->setFont(font);
        label = new QLabel(Calc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 91, 16));
        label_2 = new QLabel(Calc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 91, 16));
        label_3 = new QLabel(Calc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 110, 91, 16));
        label_4 = new QLabel(Calc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 160, 91, 16));
        label_5 = new QLabel(Calc);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 210, 91, 16));
        label_6 = new QLabel(Calc);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 260, 91, 16));
        label_7 = new QLabel(Calc);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 310, 91, 16));
        label_8 = new QLabel(Calc);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 360, 91, 16));
        label_9 = new QLabel(Calc);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 410, 91, 16));
        label_10 = new QLabel(Calc);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(280, 10, 91, 16));
        label_11 = new QLabel(Calc);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 60, 91, 16));
        label_12 = new QLabel(Calc);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 110, 91, 16));
        label_13 = new QLabel(Calc);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(280, 160, 91, 16));
        label_14 = new QLabel(Calc);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(280, 210, 91, 16));
        label_15 = new QLabel(Calc);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(280, 260, 91, 16));
        label_16 = new QLabel(Calc);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(280, 310, 91, 16));
        label_17 = new QLabel(Calc);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(280, 360, 91, 16));
        label_18 = new QLabel(Calc);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(280, 410, 91, 16));
        label_19 = new QLabel(Calc);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(270, 30, 16, 20));
        label_20 = new QLabel(Calc);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(270, 80, 16, 20));
        label_21 = new QLabel(Calc);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(270, 130, 16, 20));
        label_22 = new QLabel(Calc);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(270, 180, 16, 20));
        label_23 = new QLabel(Calc);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(270, 230, 16, 20));
        label_24 = new QLabel(Calc);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(270, 280, 20, 20));
        label_25 = new QLabel(Calc);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(270, 330, 16, 20));
        label_26 = new QLabel(Calc);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(270, 380, 20, 20));
        label_27 = new QLabel(Calc);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(270, 430, 16, 20));
        label_28 = new QLabel(Calc);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(390, 40, 41, 61));
        QFont font2;
        font2.setPointSize(50);
        label_28->setFont(font2);
        timeEdit = new QTimeEdit(Calc);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);
        timeEdit->setGeometry(QRect(390, 130, 221, 71));
        QFont font3;
        font3.setPointSize(40);
        timeEdit->setFont(font3);
        timeEdit->setReadOnly(true);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        checkBox = new QCheckBox(Calc);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 16, 17));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(Calc);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 80, 16, 17));
        checkBox_2->setChecked(true);
        checkBox_3 = new QCheckBox(Calc);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 130, 16, 17));
        checkBox_3->setChecked(true);
        checkBox_4 = new QCheckBox(Calc);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 180, 16, 17));
        checkBox_4->setChecked(true);
        checkBox_5 = new QCheckBox(Calc);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(20, 230, 16, 17));
        checkBox_5->setChecked(true);
        checkBox_6 = new QCheckBox(Calc);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(20, 280, 16, 17));
        checkBox_6->setChecked(true);
        checkBox_7 = new QCheckBox(Calc);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 330, 16, 17));
        checkBox_7->setChecked(true);
        checkBox_8 = new QCheckBox(Calc);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(20, 380, 16, 17));
        checkBox_8->setChecked(true);
        checkBox_9 = new QCheckBox(Calc);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 430, 16, 17));
        checkBox_9->setChecked(true);
        QWidget::setTabOrder(checkBox, lineEdit);
        QWidget::setTabOrder(lineEdit, spinBox);
        QWidget::setTabOrder(spinBox, checkBox_2);
        QWidget::setTabOrder(checkBox_2, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, spinBox_2);
        QWidget::setTabOrder(spinBox_2, checkBox_3);
        QWidget::setTabOrder(checkBox_3, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, spinBox_3);
        QWidget::setTabOrder(spinBox_3, checkBox_4);
        QWidget::setTabOrder(checkBox_4, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, spinBox_4);
        QWidget::setTabOrder(spinBox_4, checkBox_5);
        QWidget::setTabOrder(checkBox_5, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, spinBox_5);
        QWidget::setTabOrder(spinBox_5, checkBox_6);
        QWidget::setTabOrder(checkBox_6, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, spinBox_6);
        QWidget::setTabOrder(spinBox_6, checkBox_7);
        QWidget::setTabOrder(checkBox_7, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, spinBox_7);
        QWidget::setTabOrder(spinBox_7, checkBox_8);
        QWidget::setTabOrder(checkBox_8, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, spinBox_8);
        QWidget::setTabOrder(spinBox_8, checkBox_9);
        QWidget::setTabOrder(checkBox_9, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, spinBox_9);
        QWidget::setTabOrder(spinBox_9, timeEdit);
        QWidget::setTabOrder(timeEdit, pushButton);

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QWidget *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Calc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Calc", "Start", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Calc", "Member Name", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Calc", "Member Cost", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Calc", "\342\202\254", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("Calc", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
        checkBox_5->setText(QString());
        checkBox_6->setText(QString());
        checkBox_7->setText(QString());
        checkBox_8->setText(QString());
        checkBox_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
