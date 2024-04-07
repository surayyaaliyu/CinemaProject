#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "WelcomeWindow.h"
#include "RegisterWindow.h"
#include "Users.h"
#include <QString>
#include <QWidget>


LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_Error->setVisible(false);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonLogin_clicked()
{
    QString usernames = ui->lineEditUsername->text();
    QString passwords = ui->lineEditPassword->text();

    if((usernames == "admin" && passwords == "admin") || (usernames == "test" && passwords == "1234")
        || (usernames == "user1" && passwords == "1101") || usernames == "user2" && passwords == "1102"){
        hide();
        WelcomeWindow* welcomeWindow = new WelcomeWindow(this);
        welcomeWindow->show();
    } else{
       ui->label_Error->setVisible(true);
    }

}


void LoginWindow::on_pushButtonRegister_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();

}

