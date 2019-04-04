#ifndef IMAGEN_H
#define IMAGEN_H

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
class Imagen;
}

class Imagen : public QWidget
{
    Q_OBJECT

public:
    explicit Imagen(QWidget *parent = nullptr);
    ~Imagen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    int auxPrint=0;
    double suma;
    double media;
    Ui::Imagen *ui;
};

#endif // IMAGEN_H
