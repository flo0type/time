#ifndef GRAPHICUI_H
#define GRAPHICUI_H

#include <QMainWindow>

namespace Ui {
class graphicUI;
}

class graphicUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit graphicUI(QWidget *parent = 0);
    ~graphicUI();
    QString getTime();
public slots:


private:
    Ui::graphicUI *ui;
};

#endif // GRAPHICUI_H
