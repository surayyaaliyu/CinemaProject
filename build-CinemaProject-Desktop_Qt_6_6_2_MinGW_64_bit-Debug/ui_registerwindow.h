/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLabel *labelRetypePasswprd;
    QLineEdit *lineEditRetypePassword;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditUsername;
    QLabel *labelExistingUsername;
    QLabel *labelPasswordNotMatching;
    QComboBox *comboBoxMonth;
    QLabel *labelDateofBirth;
    QLabel *labelMonth;
    QLabel *labelDay;
    QLabel *labelYear;
    QLineEdit *lineEditDay;
    QLineEdit *lineEditYear;
    QGroupBox *groupBoxGender;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QGroupBox *groupBoxAccountType;
    QRadioButton *radioButtonUser;
    QRadioButton *radioButtonAdmin;
    QGroupBox *groupBoxFavoriteGenres;
    QCheckBox *checkBoxAction;
    QCheckBox *checkBoxComedy;
    QCheckBox *checkBoxRomance;
    QCheckBox *checkBoxDrama;
    QCheckBox *checkBoxHorror;
    QCheckBox *checkBoxOther;
    QLabel *labelDateofBirth_Error;
    QPushButton *pushButtonRegister;
    QLabel *labelRegister_error;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(688, 566);
        labelUsername = new QLabel(RegisterWindow);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(70, 60, 61, 16));
        labelPassword = new QLabel(RegisterWindow);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(70, 100, 61, 16));
        labelRetypePasswprd = new QLabel(RegisterWindow);
        labelRetypePasswprd->setObjectName("labelRetypePasswprd");
        labelRetypePasswprd->setGeometry(QRect(70, 140, 101, 16));
        lineEditRetypePassword = new QLineEdit(RegisterWindow);
        lineEditRetypePassword->setObjectName("lineEditRetypePassword");
        lineEditRetypePassword->setGeometry(QRect(180, 140, 113, 22));
        lineEditPassword = new QLineEdit(RegisterWindow);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(180, 100, 113, 22));
        lineEditUsername = new QLineEdit(RegisterWindow);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(180, 60, 113, 22));
        labelExistingUsername = new QLabel(RegisterWindow);
        labelExistingUsername->setObjectName("labelExistingUsername");
        labelExistingUsername->setGeometry(QRect(310, 60, 111, 16));
        labelPasswordNotMatching = new QLabel(RegisterWindow);
        labelPasswordNotMatching->setObjectName("labelPasswordNotMatching");
        labelPasswordNotMatching->setGeometry(QRect(310, 140, 111, 16));
        comboBoxMonth = new QComboBox(RegisterWindow);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(70, 230, 81, 22));
        labelDateofBirth = new QLabel(RegisterWindow);
        labelDateofBirth->setObjectName("labelDateofBirth");
        labelDateofBirth->setGeometry(QRect(70, 180, 71, 16));
        labelMonth = new QLabel(RegisterWindow);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(70, 210, 41, 16));
        labelDay = new QLabel(RegisterWindow);
        labelDay->setObjectName("labelDay");
        labelDay->setGeometry(QRect(160, 210, 41, 16));
        labelYear = new QLabel(RegisterWindow);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(250, 210, 41, 16));
        lineEditDay = new QLineEdit(RegisterWindow);
        lineEditDay->setObjectName("lineEditDay");
        lineEditDay->setGeometry(QRect(160, 230, 81, 22));
        lineEditYear = new QLineEdit(RegisterWindow);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(250, 230, 81, 22));
        groupBoxGender = new QGroupBox(RegisterWindow);
        groupBoxGender->setObjectName("groupBoxGender");
        groupBoxGender->setGeometry(QRect(70, 270, 120, 80));
        radioButtonMale = new QRadioButton(groupBoxGender);
        radioButtonMale->setObjectName("radioButtonMale");
        radioButtonMale->setGeometry(QRect(10, 20, 89, 20));
        radioButtonFemale = new QRadioButton(groupBoxGender);
        radioButtonFemale->setObjectName("radioButtonFemale");
        radioButtonFemale->setGeometry(QRect(10, 40, 89, 20));
        groupBoxAccountType = new QGroupBox(RegisterWindow);
        groupBoxAccountType->setObjectName("groupBoxAccountType");
        groupBoxAccountType->setGeometry(QRect(220, 270, 120, 80));
        radioButtonUser = new QRadioButton(groupBoxAccountType);
        radioButtonUser->setObjectName("radioButtonUser");
        radioButtonUser->setGeometry(QRect(10, 20, 89, 20));
        radioButtonAdmin = new QRadioButton(groupBoxAccountType);
        radioButtonAdmin->setObjectName("radioButtonAdmin");
        radioButtonAdmin->setGeometry(QRect(10, 40, 89, 20));
        groupBoxFavoriteGenres = new QGroupBox(RegisterWindow);
        groupBoxFavoriteGenres->setObjectName("groupBoxFavoriteGenres");
        groupBoxFavoriteGenres->setGeometry(QRect(70, 360, 201, 101));
        checkBoxAction = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxAction->setObjectName("checkBoxAction");
        checkBoxAction->setGeometry(QRect(10, 20, 76, 20));
        checkBoxComedy = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxComedy->setObjectName("checkBoxComedy");
        checkBoxComedy->setGeometry(QRect(10, 40, 76, 20));
        checkBoxRomance = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxRomance->setObjectName("checkBoxRomance");
        checkBoxRomance->setGeometry(QRect(10, 60, 76, 20));
        checkBoxDrama = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxDrama->setObjectName("checkBoxDrama");
        checkBoxDrama->setGeometry(QRect(100, 20, 76, 20));
        checkBoxHorror = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxHorror->setObjectName("checkBoxHorror");
        checkBoxHorror->setGeometry(QRect(100, 40, 76, 20));
        checkBoxOther = new QCheckBox(groupBoxFavoriteGenres);
        checkBoxOther->setObjectName("checkBoxOther");
        checkBoxOther->setGeometry(QRect(100, 60, 76, 20));
        labelDateofBirth_Error = new QLabel(RegisterWindow);
        labelDateofBirth_Error->setObjectName("labelDateofBirth_Error");
        labelDateofBirth_Error->setGeometry(QRect(340, 230, 111, 16));
        pushButtonRegister = new QPushButton(RegisterWindow);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(70, 480, 75, 24));
        labelRegister_error = new QLabel(RegisterWindow);
        labelRegister_error->setObjectName("labelRegister_error");
        labelRegister_error->setGeometry(QRect(160, 480, 131, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        labelUsername->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelRetypePasswprd->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        labelExistingUsername->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Already Existing</span></p></body></html>", nullptr));
        labelPasswordNotMatching->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Not Matching</span></p></body></html>", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "January", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "February", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        labelDateofBirth->setText(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        labelMonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        labelDay->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelYear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBoxGender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonMale->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBoxAccountType->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBoxFavoriteGenres->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genres", nullptr));
        checkBoxAction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxComedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxRomance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxDrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxHorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxOther->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        labelDateofBirth_Error->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Age is less than 12</span></p></body></html>", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        labelRegister_error->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
