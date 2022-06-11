#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/board.jpg");
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
    QLabel *BoardImage = new QLabel(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

