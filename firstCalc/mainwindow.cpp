#include "mainwindow.h"
#include "ui_mainwindow.h"

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

float first_num, second_num, result;

void MainWindow::on_btnPlus_clicked()
{
    first_num = ui->first_num_txt->text().toFloat();
    second_num = ui->second_num_txt->text().toFloat();
    result = first_num + second_num;
    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_btnSubstract_clicked()
{
    first_num = ui->first_num_txt->text().toFloat();
    second_num = ui->second_num_txt->text().toFloat();
    result = first_num - second_num;
    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_btnDevide_clicked()
{
    first_num = ui->first_num_txt->text().toFloat();
    second_num = ui->second_num_txt->text().toFloat();
    result = first_num / second_num;
    ui->result_txt->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    first_num = ui->first_num_txt->text().toFloat();
    second_num = ui->second_num_txt->text().toFloat();
    result = first_num * second_num;
    ui->result_txt->setText(QString::number(result));
}

