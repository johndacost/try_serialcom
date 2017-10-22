#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialcom.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SerialCom* sc = new SerialCom();

}

MainWindow::~MainWindow()
{
    delete ui;
}
