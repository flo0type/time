#include "graphicui.h"
#include "ui_graphicui.h"
#include <QTime>
#include <QDebug>
#include <QLabel>

#define DEFAULT_TIME "00:00:00"


graphicUI::graphicUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::graphicUI)
{
    ui->setupUi(this);
    qDebug () << getTime();
    QLabel *timeLabel = new QLabel(DEFAULT_TIME,this);
    timeLabel->setText(getTime());
}

graphicUI::~graphicUI()
{
    delete ui;
}

QString graphicUI::getTime()
{
    QTime tempTime;
    tempTime = tempTime.currentTime();
    qDebug () << tempTime;
    QString stringTime(QString::number(tempTime.hour()));
    stringTime.append(":");
    stringTime.append(QString::number(tempTime.minute()));
    stringTime.append(":");
    stringTime.append(QString::number(tempTime.second()));
    return stringTime;
}
