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


void MainWindow::on_boton_clicked()
{

    short hora, min, seg;

    QString tiempoSeg = ui->dato->text();


    long int tiempo = tiempoSeg.toInt();

    seg = tiempo%60;

    min = (tiempo/60)%60;

    hora = (tiempo/60/60);


    ui->resultado->setText(QString::number(hora)+ " horas, "+ QString::number(min)+" minutos, "+ QString::number(seg)+ "segundos " );

}

