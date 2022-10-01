#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    esconderTodo();
    setDefaultTexts();
    setWindowIcon(QIcon(":/images/icon.png"));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::setDefaultTexts(){
    ui->listaBarcos->setPlaceholderText(QStringLiteral("Elija Barco"));
    ui->tamanioMapa->setPlaceholderText(QStringLiteral("TAMANIO MAPA"));
    ui->cantBarcos->setPlaceholderText(QStringLiteral("CANT BARCOS"));
    ui->posX->setPlaceholderText(QStringLiteral("X"));
    ui->posY->setPlaceholderText(QStringLiteral("Y"));
    ui->listaBarcos->setCurrentIndex(-1);
}

void MainWindow::esconderTodo(){
    ui->configJuego->hide();
    ui->mapas->hide();
    ui->ponerBarcos->hide();
}

void MainWindow::on_nuevoJuego_clicked(){
    ui->nuevoJuego->hide();
    ui->cargarPartida->hide();
    ui->configJuego->show();
}

void MainWindow::on_jugar_clicked() {
    ui->configJuego->hide();
    crearMapas();
    ui->mapas->show();

    if (!this->ui->checkAleatorio->isChecked()) {
        ui->ponerBarcos->show();
        ui->mapaAtaque->hide();
        //PASARLO A FUNCION COMO LO DE ABAJO
        std::string str = "Barcos agregados: " + std::to_string(this->barcosAgregados) + " / " + std::to_string(ui->cantBarcos->text().toInt());
        QString texto = QString::fromStdString(str);
        ui->barcosRestantes->setText(texto);
    }
}

void MainWindow::crearMapas(){
    int sizeMap = ui->tamanioMapa->text().toInt();

    this->buttons = new QPushButton**[sizeMap];
    this->labels = new QLabel**[sizeMap];
    for (int i = 0; i < sizeMap; ++i) {
        this->buttons[i] = new QPushButton*[sizeMap];
        this->labels[i] = new QLabel*[sizeMap];
        for (int j = 0; j < sizeMap; ++j) {
            QPushButton* button = new QPushButton(QString::number(i + j));

            connect(button, &QPushButton::released, this,
                    [=]() { handleButton(i, j); });

            this->buttons[i][j] = button;
            ui->attackGLayout->addWidget(button, i, j);

            QLabel* label = new QLabel("-");
            this->labels[i][j] = label;
            ui->mapGLayout->addWidget(label, i, j);
        }
    }
}

void MainWindow::on_aniadirBarco_clicked(){
    if (this->barcosAgregados + 1 == ui->cantBarcos->text().toInt()) {
        ui->ponerBarcos->hide();
        ui->mapaAtaque->show();
        //ACA IRIA LO DE VALIDAR POS DEL BARCO
    } else if (ui->posX->text().toInt() > 4 && ui->posY->text().toInt() > 5){
        this->barcosAgregados++;
        //ESTO PASARLO A FUNCION
        std::string str = "Barcos agregados: " + std::to_string(this->barcosAgregados) + " / " + std::to_string(ui->cantBarcos->text().toInt());
        QString texto = QString::fromStdString(str);
        ui->barcosRestantes->setText(texto);
    } else {
        QMessageBox::information(this, "ALERTA", "Error en algun parametro\nIntente de nuevo.");
    }
}

