#include "withdrawwindow.h"
#include "ui_withdrawwindow.h"

WithdrawWindow::WithdrawWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WithdrawWindow)
{
    ui->setupUi(this);
}

WithdrawWindow::~WithdrawWindow()
{
    delete ui;
}
