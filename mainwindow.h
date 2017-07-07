#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include"main.h"
#include "gamemap.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum Gamestatus{
        mapedit=520,
        gameing,
        pause
    };
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
void paintEvent(QPaintEvent *event);

private:
    void setgame(Gamestatus status)
    {
        gamestatus=status;
    }//设置游戏状态

    Gamestatus gamestatus;

    GameMap gamemap;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
