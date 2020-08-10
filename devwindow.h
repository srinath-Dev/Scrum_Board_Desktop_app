#ifndef DEVWINDOW_H
#define DEVWINDOW_H

#include <QDialog>

namespace Ui {
class devwindow;
}

class devwindow : public QDialog
{
    Q_OBJECT

public:
    explicit devwindow(QWidget *parent = nullptr);
    ~devwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::devwindow *ui;
};

#endif // DEVWINDOW_H
