#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include "loginwindow.h"
#include <QString>
#include <QWidget>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    ui->labelHello->setText("Hello, ");
    QPixmap pix("C:\\Users\\user\\Downloads\\popcorn.jpg");
    int w = ui->labelPicture->width();
    int h = ui->labelPicture->height();
    ui->labelPicture->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));


}


WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButtonLogout_clicked()
{
    hide();
    LoginWindow* loginWindow = new LoginWindow(this);
    loginWindow->show();
}

