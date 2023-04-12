#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestApi_global.h"

#include <QObject>

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

class DLLRESTAPI_EXPORT DLLRestApi : public QObject
{
    Q_OBJECT

public:
    DLLRestApi();
    virtual ~DLLRestApi();

    static QString getBaseUrl();
    int getCardId(QString hexa);
    int getAccountId(int cardID);
    int getCustomerId(int accountID);
    QString getAccountType(int accountID);
    QString getCustomerName(int customerID);
    double getAccountBalance(int accountID);
    double getAccountCredit(int accountID);
    void setAccountBalance(int accountID, int withdrawAmount, QString withdrawType);

private slots:

private:
    QString username;
    QString token;
    int debitSaldoonTehtäväMuutos = 1;
    int creditSaldoonTehtäväMuutos = 1;

};

#endif // DLLRESTAPI_H
