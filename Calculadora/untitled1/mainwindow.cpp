#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->resultado->setText("0.0");



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sumar_clicked()
{

    ui->resultado->setText(QString::number(ui->n1->value() + ui->n2->value()));
}


void MainWindow::on_restar_clicked()
{
ui->resultado->setText(QString::number(ui->n1->value() - ui->n2->value()));
}


void MainWindow::on_multiplicar_clicked()
{
ui->resultado->setText(QString::number(ui->n1->value() * ui->n2->value()));
}


void MainWindow::on_dividir_clicked()
{
ui->resultado->setText(QString::number(ui->n1->value() / ui->n2->value()));
}

