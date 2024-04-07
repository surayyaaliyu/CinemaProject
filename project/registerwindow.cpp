#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QApplication>
#include <QLineEdit>
#include <QComboBox>
#include <QRadioButton>
#include <QCheckBox>
#include "welcomewindow.h"
#include "Users.h"
#include "loginwindow.h"



RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->labelExistingUsername->setVisible(false);
    ui->labelPasswordNotMatching->setVisible(false);
    ui->labelDateofBirth_Error->setVisible(false);
    ui->labelRegister_error->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}


void RegisterWindow::on_pushButtonRegister_clicked()
{
    QLineEdit *lineEditUsername = new QLineEdit;
    QString username = lineEditUsername->text();

    QLineEdit *lineEditPassword = new QLineEdit;
    QString password = lineEditPassword->text();

    QLineEdit *lineEditRetypePassword = new QLineEdit;
    QString retype = lineEditRetypePassword->text();

    QComboBox *comboBoxMonth = new QComboBox;
    QString month_option = comboBoxMonth->currentText();

    QLineEdit *lineEditDay = new QLineEdit;
    QString Day = lineEditDay->text();

    QLineEdit *lineEditYear = new QLineEdit;
    QString Year = lineEditYear->text();

    QRadioButton *radioButtonMale = new QRadioButton("Male");
    bool isradioButtonMaleChecked = radioButtonMale->isChecked();

    QRadioButton *radioButtonFemale = new QRadioButton("Female");
    bool isradioButtonFemaleChecked = radioButtonFemale->isChecked();

    QRadioButton *radioButtonUser = new QRadioButton("User");
    bool isradioButtonUserChecked = radioButtonUser->isChecked();

    QRadioButton *radioButtonAdmin = new QRadioButton("Admin");
    bool isradioButtonAdminChecked = radioButtonAdmin->isChecked();


    QString usernames = ui->lineEditUsername->text();
    if((usernames == "admin") || (usernames == "test" ) || (usernames == "user1")
        || (usernames == "user2") ){
        ui->labelExistingUsername->setVisible(true);
    } else{
        ui->labelExistingUsername->setVisible(false);
    }

    QString checkpasswords1 = ui->lineEditPassword->text();
    QString checkpasswords2 = ui->lineEditRetypePassword->text();

    if(checkpasswords1 == checkpasswords2){
        ui->labelPasswordNotMatching->setVisible(false);
    } else{
        ui->labelPasswordNotMatching->setVisible(true);
    }

    QString checkage = ui->lineEditYear->text();
    int age = checkage.toInt();
    int current_year = 2024;

    if(current_year-age <= 12){
        ui->labelDateofBirth_Error->setVisible(true);
    } else {
        ui->labelDateofBirth_Error->setVisible(false);
    }


    if (lineEditUsername->text().isEmpty() || lineEditPassword->text().isEmpty() || lineEditRetypePassword->text().isEmpty()
        || comboBoxMonth->currentText().isEmpty() || lineEditDay->text().isEmpty() || lineEditYear->text().isEmpty()
        || !radioButtonFemale->isChecked() || !radioButtonAdmin->isChecked()
        || !radioButtonUser->isChecked() || radioButtonMale == nullptr || !radioButtonMale->isChecked()) {
        ui->labelRegister_error->setVisible(true);
        hide();
        WelcomeWindow* welcomeWindow = new WelcomeWindow(this);
        welcomeWindow->show();
    } else {
        ui->labelRegister_error->setVisible(false);
        hide();
        WelcomeWindow* welcomeWindow = new WelcomeWindow(this);
        welcomeWindow->show();

    }



}

