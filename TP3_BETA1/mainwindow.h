#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void handleButton(int x, int y) {
        auto button = qobject_cast<QPushButton*>(sender());
        if (button->isEnabled()) {
          button->setDisabled(true);
          button->setStyleSheet(QString("color: #ff0000"));
          std::cout << x << " " << y << "\n";
        }
      }

    void esconderTodo();
    void crearMapas();
    void setDefaultTexts();

private slots:
    void on_jugar_clicked();

    void on_nuevoJuego_clicked();

    void on_aniadirBarco_clicked();

private:
    Ui::MainWindow* ui;
    QPushButton*** buttons;
    QLabel*** labels;
    int barcosAgregados = 0;
};
#endif // MAINWINDOW_H
