#ifndef UXWINDOW_H
#define UXWINDOW_H

#include <QDialog>

namespace Ui {
class uxwindow;
}

class uxwindow : public QDialog
{
    Q_OBJECT

public:
    explicit uxwindow(QWidget *parent = nullptr);
    ~uxwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::uxwindow *ui;
};

#endif // UXWINDOW_H
