#include "uxwindow.h"
#include "ui_uxwindow.h"
#include <QPixmap>
#include "mainwindow.h"

uxwindow::uxwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uxwindow)
{
    ui->setupUi(this);
    QDialog::showFullScreen();
    QPixmap pi(":/new/prefix1/C:/Users/naths/Pictures/uipic.png");
    ui->labelux->setPixmap(pi);
    ui->labelux->resize(1920,1080);



}

uxwindow::~uxwindow()
{
    delete ui;
}

void uxwindow::on_pushButton_clicked()
{

    hide();

    MainWindow win;
    win.show();



}
