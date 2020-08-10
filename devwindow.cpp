#include "devwindow.h"
#include "ui_devwindow.h"
#include "mainwindow.h"

devwindow::devwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::devwindow)
{
    ui->setupUi(this);
    QDialog::showFullScreen();
    QPixmap pi(":/new/prefix1/C:/Users/naths/Pictures/develop pic.png");
    ui->labeldev->setPixmap(pi);
    ui->labeldev->resize(1920,1080);
}

devwindow::~devwindow()
{
    delete ui;
}

void devwindow::on_pushButton_clicked()
{
    hide();

    MainWindow win;
    win.show();
}
