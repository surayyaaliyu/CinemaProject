/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLabel *label_Error;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonRegister;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(634, 450);
        labelUsername = new QLabel(LoginWindow);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(60, 50, 61, 16));
        labelPassword = new QLabel(LoginWindow);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(60, 90, 61, 16));
        label_Error = new QLabel(LoginWindow);
        label_Error->setObjectName("label_Error");
        label_Error->setGeometry(QRect(60, 130, 201, 16));
        pushButtonLogin = new QPushButton(LoginWindow);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(50, 160, 75, 24));
        pushButtonRegister = new QPushButton(LoginWindow);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(180, 160, 75, 24));
        lineEditUsername = new QLineEdit(LoginWindow);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(130, 50, 121, 22));
        lineEditPassword = new QLineEdit(LoginWindow);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(130, 90, 121, 22));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        labelUsername->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        label_Error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Error: wrong username or password</span></p></body></html>", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
