#ifndef IMAGEN2_H
#define IMAGEN2_H

#include <QWidget>
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
#include <fstream>


namespace Ui {
class Imagen2;
}

class Imagen2 : public QWidget
{
    Q_OBJECT

public:
    explicit Imagen2(QWidget *parent = nullptr);
    ~Imagen2();
    void setOrigen(QString ubicacion);
    void setDestino(QString ubicacion);
    QString getOrigen();
    QString getDestino();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Imagen2 *ui;
    QString directorioOrigen;
    QString directorioDestino;
    int auxPrint=0;
    double suma;
    double media;
};

#endif // IMAGEN2_H
