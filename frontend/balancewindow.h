#ifndef BALANCEWINDOW_H
#define BALANCEWINDOW_H

#include <QDialog>

namespace Ui {
class BalanceWindow;
}

class BalanceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BalanceWindow(QWidget *parent = nullptr);
    ~BalanceWindow();

private:
    Ui::BalanceWindow *ui;
};

#endif // BALANCEWINDOW_H
