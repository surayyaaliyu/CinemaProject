/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *labelHello;
    QLabel *labelPicture;
    QLabel *labelWelcome;
    QPushButton *pushButtonLogout;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(553, 427);
        labelHello = new QLabel(WelcomeWindow);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(60, 50, 201, 16));
        labelPicture = new QLabel(WelcomeWindow);
        labelPicture->setObjectName("labelPicture");
        labelPicture->setGeometry(QRect(60, 70, 271, 161));
        labelWelcome = new QLabel(WelcomeWindow);
        labelWelcome->setObjectName("labelWelcome");
        labelWelcome->setGeometry(QRect(130, 70, 91, 31));
        pushButtonLogout = new QPushButton(WelcomeWindow);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(60, 240, 75, 24));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("WelcomeWindow", "Hello,", nullptr));
        labelPicture->setText(QString());
        labelWelcome->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic; color:#ffffff;\">Welcome</span></p></body></html>", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
