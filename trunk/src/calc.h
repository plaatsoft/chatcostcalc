#ifndef CALC_H
#define CALC_H

#include <QWidget>
#include <QtGui>

namespace Ui {
    class Calc;
}

class Calc : public QWidget
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = 0);
    ~Calc();

 public Q_SLOTS:
     void statemachine();

private:
    Ui::Calc *ui;
    QTimer *timer;
    QTime *time;
    QGraphicsScene *scene;

    bool start;
    int counter;
    float sum;

    void readSettings();
    void writeSettings();

    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_clicked();
};

#endif // CALC_H
