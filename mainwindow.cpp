#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "core.cpp"


string input_string = "";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_clr_clicked()
{
    input_string = "";
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn9_clicked()
{
    input_string += '9';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn8_clicked()
{
    input_string += '8';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn7_clicked()
{
    input_string += '7';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn6_clicked()
{
    input_string += '6';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn5_clicked()
{
    input_string += '5';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn4_clicked()
{
    input_string += '4';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn3_clicked()
{
    input_string += '3';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn2_clicked()
{
    input_string += '2';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn1_clicked()
{
    input_string += '1';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_btn0_clicked()
{
    input_string += '0';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}








void MainWindow::on_add_clicked()
{
    input_string += '+';
    ui->lineEdit->setText(QString::fromStdString(input_string));

}


void MainWindow::on_sub_clicked()
{
    input_string += '-';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_mult_clicked()
{
    input_string += '*';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_div_clicked()
{
    input_string += '/';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_result_clicked()
{
    input_string += '=';
    Resulter *r = new Resulter();
    string Result = r->result(input_string);
    input_string.pop_back();
    delete r;

    float value = stof(Result);
    QString Result_final = QString::number(value, 'f', 2);

    ui->lineEdit->setText(Result_final);
}


void MainWindow::on_decimal_clicked()
{
    input_string += '.';
    ui->lineEdit->setText(QString::fromStdString(input_string));
}


void MainWindow::on_clr_one_clicked()
{
    if (!input_string.empty()) {
        input_string.pop_back();
    }
    ui->lineEdit->setText(QString::fromStdString(input_string));
}

