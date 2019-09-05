#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <stdio.h>
#include <QListWidgetItem>
#include <QLabel>


QString user_name = "Kevin";
QString pass = "12345";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setStyleSheet("background-color:grey");

    ui->LemonSeries_2->setStyleSheet("QWidget{background-color:grey;}");
    ui->label_4->setText("Hello");



}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}





void MainWindow::on_pushButton_2_clicked()
{
    QCoreApplication::exit();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_5_clicked()
{
   QString input_user_name = ui->lineEdit->text();
   QString input_password = ui->lineEdit_2->text();
   if(user_name == input_user_name && pass == input_password){
       qDebug() <<"Login Sucess";
       ui->stackedWidget->setCurrentIndex(2);
   }
   else {
      qDebug() <<"Failed";
   }

}






void MainWindow::on_pushButton_3_clicked()
{
   QString name1 = "Lemon Green Tea";

     get_name(name1);



 }


void MainWindow::on_pushButton_27_clicked()
{

}

void MainWindow::get_name(QString item){


    List =item.split("/n");
    List.append(item);
    qDebug()  << List;
    //List.
    //ui->label_4->setText(QStringList::L);
}



void MainWindow::on_pushButton_4_clicked()
{
    QString name2 = "Lemon Black Tea";
    get_name(name2);
}

void MainWindow::on_pushButton_9_clicked()
{
    for(int i = 0; 0< List.size(); i++){
        List.removeAll("");

    }

}
