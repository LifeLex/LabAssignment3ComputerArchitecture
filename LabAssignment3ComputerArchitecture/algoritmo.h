#ifndef ALGORITMO_H
#define ALGORITMO_H

#include "QTime"
#include "iostream"
#include "sstream"
#include <QWidget>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
#include <ctime>
#include <iostream>
#include <vector>
#include <string>
#include <QElapsedTimer>


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


    void on_seleccionarpushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Algoritmo *ui;


    int nNumerosEnTxt;
    int numeroRandom;
    int temp;
    int auxPrint=0;
    QTime timeElapsed;
    QString fileName;
    QString string;
    QStringList list;
    double suma;
    double media;

};

#endif // ALGORITMO_H
