#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QButtonGroup>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QButtonGroup *buttongroup=new QButtonGroup(this);
    buttongroup->addButton(ui->checkBox);
    buttongroup->addButton(ui->checkBox_2);
    buttongroup->addButton(ui->checkBox_3);
    buttongroup->setExclusive(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Windows CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Windows CheckBox is Unchecked";
    }
}

void MainWindow::on_checkBox_2_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Mac CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Mac CheckBox is Unchecked";
    }
}

void MainWindow::on_checkBox_3_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Linux CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Linux CheckBox is Unchecked";
    }
}


void MainWindow::on_checkBox_4_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"A CheckBox is Checked";
    }
    else
    {
        qDebug()<<"A CheckBox is Unchecked";
    }
}


void MainWindow::on_checkBox_5_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"B CheckBox is Checked";
    }
    else
    {
        qDebug()<<"B CheckBox is Unchecked";
    }
}

void MainWindow::on_checkBox_6_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"C CheckBox is Checked";
    }
    else
    {
        qDebug()<<"C CheckBox is Unchecked";
    }
}

void MainWindow::on_pushButton_clicked()
{
    //EXCLUSIVE
        if(ui->checkBox->isChecked())
        {
            qDebug()<<"Windows CheckBox is Checked";
        }
        else
        {
            qDebug()<<"Windows CheckBox is Unchecked";
        }
        if(ui->checkBox_2->isChecked())
        {
            qDebug()<<"Mac CheckBox is Checked";
        }
        else
        {
            qDebug()<<"Mac CheckBox is Unchecked";
        }
        if(ui->checkBox_3->isChecked())
        {
            qDebug()<<"Linux CheckBox is Checked";
        }
        else
        {
            qDebug()<<"Linux CheckBox is Unchecked";
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    //NON-EXCLUSIVE
        if(ui->checkBox->isChecked())
        {
            ui->checkBox_2->setChecked(false);
        }
        else
        {
            ui->checkBox_3->setChecked(true);
        }
}
