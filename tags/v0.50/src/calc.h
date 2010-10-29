/**
 *  @file
 *  @brief The file contain Calc class
 *  @author wplaat
 *
 *  Copyright (C) 2008-2010 PlaatSoft
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

#ifndef CALC_H
#define CALC_H

#include <QtGui>
#include <QWidget>
#include <QtNetwork>

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
    QNetworkAccessManager *manager;
    QAction *fetchAct;

    bool start;
    bool pause;
    int counter;
    float sum;

    void readSettings();
    void writeSettings();

    void closeEvent(QCloseEvent *event);
    void initNetwork(void);
    void parseVersion(QString response);

private slots:
    void on_maxCostSpinBox_valueChanged(int );
    void on_pauseButton_clicked();
    void on_startButton_clicked();
    void on_dial_valueChanged(int value);
    void on_spinBox_valueChanged(int );
    void fetchVersion();
    void replyFinished(QNetworkReply *);
};

#endif // CALC_H
