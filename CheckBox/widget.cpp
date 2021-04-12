#include "widget.h"
#include "ui_widget.h"
#include<QTextStream>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Option 1 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 1 is Unchecked"<<endl;
    }
}

void Widget::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Option 2 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 2 is Unchecked"<<endl;
    }
}

void Widget::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Option 3 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 3 is Unchecked"<<endl;
    }
}
