#ifndef TRANSACTIONSWINDOW_H
#define TRANSACTIONSWINDOW_H

#include <QDialog>

namespace Ui {
class TransactionsWindow;
}

class TransactionsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionsWindow(QWidget *parent = nullptr);
    ~TransactionsWindow();

public slots:
    void updateUI();

private:
    Ui::TransactionsWindow *ui;
};

#endif // TRANSACTIONSWINDOW_H
