#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"Nikhitha 6067","Yes, the user like apples");
    }
    else
    {
        QMessageBox::information(this,"Nikhitha 6067","No, the user do not like apples");
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this,"Nikhitha 6067","Yes, the user like apples");
    }
    else
    {
        QMessageBox::information(this,"Nikhitha 6067","No, the user do not like apples");
    }
}
