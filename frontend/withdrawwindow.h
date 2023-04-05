#ifndef WITHDRAWWINDOW_H
#define WITHDRAWWINDOW_H

#include "receiptwindow.h"
#include "sessiondata.h"

#include <QDialog>

namespace Ui {
class WithdrawWindow;
}

class WithdrawWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawWindow(QWidget *parent = nullptr);
    ~WithdrawWindow();

signals:
    void clickAmount(int);

public slots:
    void withdrawExceedWarning();

    void putSessionData(SessionData *session);
    void updateUI();

private slots:
    void withdrawButtonClicked(int);
    void withdrawMoney(int);

private:
    Ui::WithdrawWindow *ui;

    SessionData * session;

    ReceiptWindow * receiptWindow;

    bool invalidAttempt = false;
};

#endif // WITHDRAWWINDOW_H