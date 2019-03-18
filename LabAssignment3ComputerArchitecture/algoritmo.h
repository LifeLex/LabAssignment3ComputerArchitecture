#ifndef ALGORITMO_H
#define ALGORITMO_H

#include "QTime"
#include "iostream"
#include "sstream"
#include <QWidget>
#include <QFileDialog>
#include <QFile>
using namespace std;
namespace Ui {
class Algoritmo;
}

class Algoritmo : public QWidget
{
    Q_OBJECT

public:
    explicit Algoritmo(QWidget *parent = nullptr);
    ~Algoritmo();

private slots:
    void on_ejecutarPushButton_clicked();

    void on_seleccionarpushButton_clicked();

private:
    Ui::Algoritmo *ui;

    int listaNumeros[1000];
    int numeroRandom;
    int temp;
    int auxPrint=0;
    QTime timeElapsed;
    QString fileName;


};

#endif // ALGORITMO_H
