#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Algoritmo *window = new Algoritmo();
    window->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Imagen *window = new Imagen();
    window->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    Imagen2 *window = new Imagen2();
    window->show();
}
