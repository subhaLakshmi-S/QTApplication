#include "mainwindowsubha.h"
#include "ui_mainwindowsubha.h"
#include<QMessageBox>
#include<QDebug>
#include<QtCore>
#include<QtGui>

MainWindowsubi::MainWindowsubha(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowsubi)
{
    ui->setupUi(this);
}

MainWindowsubha::~MainWindowsubha()
{
    delete ui;
}


void MainWindowsubha::on_pushButton_clicked()
{
     QMessageBox :: information(this,"Subha_212218104160","This is the information box");
}

void MainWindowsubha::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Subha_212218104160","Do you like oranges?",
                              QMessageBox::Yes | QMessageBox::No);
       if(reply==QMessageBox::Yes)
          {
           QMessageBox::information(this,"Title Here","You love oranges");
       }
       else
       {
           QMessageBox::information(this,"Title Here","You don't love oranges");
       }
}

void MainWindowsubha::on_pushButton_3_clicked()
{
      QMessageBox::warning(this,"Subha_212218104160","This is a warning message");
}

void MainWindowsubha::on_pushButton_4_clicked()
{
    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Subha_212218104160","Do you like oranges?",
                              QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);
       if(reply==QMessageBox::Yes)
          {
           QMessageBox::information(this,"Title Here","You love oranges");
       }
       if(reply==QMessageBox::YesToAll)
       {
           QMessageBox::information(this,"Title Here","Yeah i love them all");
       }
       else
       {
           QMessageBox::information(this,"Title Here","You don't love oranges");
       }
}
