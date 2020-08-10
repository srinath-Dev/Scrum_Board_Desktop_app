#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include "uxwindow.h"
#include "devwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) ,
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->resize(1920,1080);
    QMessageBox::about(this,"Message by Srinath","Thank you for Selected me in Curneu Second Round");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


    uxwindow uxwin;
    uxwin.setModal(true);
    uxwin.exec();

}

void MainWindow::on_pushButton_2_clicked()
{

    devwindow devw;
    devw.setModal(true);
    devw.exec();

}

void MainWindow::on_pushButton_3_clicked()
{
    MainWindow main;
    main.close();
    hide();
}
