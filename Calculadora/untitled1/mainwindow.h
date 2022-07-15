#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGridLayout>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sumar_clicked();

    void on_restar_clicked();

    void on_multiplicar_clicked();

    void on_dividir_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
