/********************************************************************************
** Form generated from reading UI file 'dllpincode.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLPINCODE_H
#define UI_DLLPINCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DLLPinCode
{
public:
    QLabel *cardhexcodeLabel;
    QPushButton *button4;
    QPushButton *ButtonClear;
    QPushButton *button2;
    QLabel *label_3;
    QPushButton *button1;
    QPushButton *buttonEnter;
    QLabel *labelInterrupt;
    QPushButton *button9;
    QLineEdit *lineEdit;
    QPushButton *button5;
    QPushButton *button8;
    QLabel *labelAttempts;
    QLabel *label;
    QPushButton *button7;
    QPushButton *ButtonStop;
    QPushButton *button3;
    QPushButton *button0;
    QPushButton *button6;
    QLabel *labeljee;
    QLabel *labelpin;
    QLabel *labelFreezed1;
    QLabel *labelFreezed2;
    QLabel *labelinfo;
    QLabel *imageLabel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *DLLPinCode)
    {
        if (DLLPinCode->objectName().isEmpty())
            DLLPinCode->setObjectName("DLLPinCode");
        DLLPinCode->resize(800, 480);
        DLLPinCode->setMinimumSize(QSize(800, 480));
        DLLPinCode->setMaximumSize(QSize(800, 480));
        DLLPinCode->setStyleSheet(QString::fromUtf8("QWidget {\n"
"qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(255, 255, 255, 255), stop:0.373979 rgba(255, 255, 255, 255), stop:0.373991 rgba(33, 30, 255, 255), stop:0.624018 rgba(33, 30, 255, 255), stop:0.624043 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255))\n"
"}\n"
""));
        cardhexcodeLabel = new QLabel(DLLPinCode);
        cardhexcodeLabel->setObjectName("cardhexcodeLabel");
        cardhexcodeLabel->setGeometry(QRect(570, 320, 231, 20));
        button4 = new QPushButton(DLLPinCode);
        buttonGroup = new QButtonGroup(DLLPinCode);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(button4);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(20, 180, 91, 81));
        ButtonClear = new QPushButton(DLLPinCode);
        ButtonClear->setObjectName("ButtonClear");
        ButtonClear->setGeometry(QRect(330, 150, 131, 51));
        button2 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button2);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(120, 90, 91, 81));
        button2->setTabletTracking(false);
        button2->setAutoFillBackground(false);
        label_3 = new QLabel(DLLPinCode);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 350, 341, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana Pro Semibold")});
        font.setPointSize(11);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        button1 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button1);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(20, 90, 91, 81));
        button1->setAcceptDrops(false);
        buttonEnter = new QPushButton(DLLPinCode);
        buttonEnter->setObjectName("buttonEnter");
        buttonEnter->setGeometry(QRect(330, 210, 131, 141));
        labelInterrupt = new QLabel(DLLPinCode);
        labelInterrupt->setObjectName("labelInterrupt");
        labelInterrupt->setGeometry(QRect(310, 30, 481, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(16);
        labelInterrupt->setFont(font1);
        button9 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button9);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(220, 270, 101, 81));
        lineEdit = new QLineEdit(DLLPinCode);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 30, 241, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        lineEdit->setFont(font2);
        lineEdit->setAlignment(Qt::AlignCenter);
        button5 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button5);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(120, 180, 91, 81));
        button8 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button8);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(120, 270, 91, 81));
        labelAttempts = new QLabel(DLLPinCode);
        labelAttempts->setObjectName("labelAttempts");
        labelAttempts->setGeometry(QRect(540, 90, 211, 41));
        labelAttempts->setFont(font);
        label = new QLabel(DLLPinCode);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 30, 581, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana Pro")});
        font3.setPointSize(11);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/images/dllpincodeimgs/blueblue.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}"));
        button7 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button7);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(20, 270, 91, 81));
        ButtonStop = new QPushButton(DLLPinCode);
        ButtonStop->setObjectName("ButtonStop");
        ButtonStop->setGeometry(QRect(330, 90, 131, 51));
        button3 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button3);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(220, 90, 101, 81));
        QFont font4;
        font4.setPointSize(9);
        button3->setFont(font4);
        button0 = new QPushButton(DLLPinCode);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(120, 360, 91, 71));
        button6 = new QPushButton(DLLPinCode);
        buttonGroup->addButton(button6);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(220, 180, 101, 81));
        labeljee = new QLabel(DLLPinCode);
        labeljee->setObjectName("labeljee");
        labeljee->setGeometry(QRect(570, 340, 211, 20));
        labelpin = new QLabel(DLLPinCode);
        labelpin->setObjectName("labelpin");
        labelpin->setGeometry(QRect(590, 370, 131, 20));
        labelFreezed1 = new QLabel(DLLPinCode);
        labelFreezed1->setObjectName("labelFreezed1");
        labelFreezed1->setGeometry(QRect(100, 180, 691, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Verdana")});
        font5.setPointSize(11);
        font5.setBold(true);
        labelFreezed1->setFont(font5);
        labelFreezed2 = new QLabel(DLLPinCode);
        labelFreezed2->setObjectName("labelFreezed2");
        labelFreezed2->setGeometry(QRect(100, 230, 581, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Verdana")});
        font6.setPointSize(10);
        font6.setBold(true);
        labelFreezed2->setFont(font6);
        labelFreezed2->setStyleSheet(QString::fromUtf8(""));
        labelinfo = new QLabel(DLLPinCode);
        labelinfo->setObjectName("labelinfo");
        labelinfo->setGeometry(QRect(570, 290, 141, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Sitka Banner")});
        font7.setPointSize(25);
        labelinfo->setFont(font7);
        labelinfo->setTextFormat(Qt::AutoText);
        imageLabel = new QLabel(DLLPinCode);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(0, 0, 801, 481));
        imageLabel->setFrameShape(QFrame::Box);
        imageLabel->setFrameShadow(QFrame::Raised);
        imageLabel->setLineWidth(7);
        imageLabel->setScaledContents(false);
        imageLabel->raise();
        cardhexcodeLabel->raise();
        button4->raise();
        ButtonClear->raise();
        button2->raise();
        label_3->raise();
        button1->raise();
        buttonEnter->raise();
        labelInterrupt->raise();
        button9->raise();
        lineEdit->raise();
        button5->raise();
        button8->raise();
        labelAttempts->raise();
        label->raise();
        button7->raise();
        ButtonStop->raise();
        button3->raise();
        button0->raise();
        button6->raise();
        labeljee->raise();
        labelpin->raise();
        labelFreezed1->raise();
        labelFreezed2->raise();
        labelinfo->raise();

        retranslateUi(DLLPinCode);

        QMetaObject::connectSlotsByName(DLLPinCode);
    } // setupUi

    void retranslateUi(QDialog *DLLPinCode)
    {
        DLLPinCode->setWindowTitle(QCoreApplication::translate("DLLPinCode", "Dialog", nullptr));
        cardhexcodeLabel->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-size:7pt;\">cardhexcode tulee t\303\244h\303\244</span></p></body></html>", nullptr));
        button4->setText(QCoreApplication::translate("DLLPinCode", "4", nullptr));
        ButtonClear->setText(QCoreApplication::translate("DLLPinCode", "CLEAR", nullptr));
        button2->setText(QCoreApplication::translate("DLLPinCode", "2", nullptr));
        label_3->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-size:10pt;\">Hit &quot;ENTER&quot; when done</span></p></body></html>", nullptr));
        button1->setText(QCoreApplication::translate("DLLPinCode", "1", nullptr));
        buttonEnter->setText(QCoreApplication::translate("DLLPinCode", "ENTER", nullptr));
        labelInterrupt->setText(QCoreApplication::translate("DLLPinCode", "Login interrupted, cancelling...", nullptr));
        button9->setText(QCoreApplication::translate("DLLPinCode", "9", nullptr));
        button5->setText(QCoreApplication::translate("DLLPinCode", "5", nullptr));
        button8->setText(QCoreApplication::translate("DLLPinCode", "8", nullptr));
        labelAttempts->setText(QCoreApplication::translate("DLLPinCode", "attempt(s) left!", nullptr));
        label->setText(QCoreApplication::translate("DLLPinCode", "N\303\244pp\303\244ile nelinumeroinen tunnusluku", nullptr));
        button7->setText(QCoreApplication::translate("DLLPinCode", "7", nullptr));
        ButtonStop->setText(QCoreApplication::translate("DLLPinCode", "STOP", nullptr));
        button3->setText(QCoreApplication::translate("DLLPinCode", "3", nullptr));
        button0->setText(QCoreApplication::translate("DLLPinCode", "0", nullptr));
        button6->setText(QCoreApplication::translate("DLLPinCode", "6", nullptr));
        labeljee->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-size:7pt;\">cardhexcodeSQL tulee t\303\244h\303\244</span></p></body></html>", nullptr));
        labelpin->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-size:7pt;\">PIN tietokannasta</span></p></body></html>", nullptr));
        labelFreezed1->setText(QCoreApplication::translate("DLLPinCode", "The account has been frozen due to excessive amount of attempts", nullptr));
        labelFreezed2->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-weight:700;\">Ota yhteys asiakaspalvelumme numeroon: +358 10 1234567</span></p></body></html>", nullptr));
        labelinfo->setText(QCoreApplication::translate("DLLPinCode", "<html><head/><body><p><span style=\" font-size:10pt;\">Login tiedot: (debug)</span></p></body></html>", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DLLPinCode: public Ui_DLLPinCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLPINCODE_H