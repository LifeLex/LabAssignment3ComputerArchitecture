#include "algoritmo.h"
#include "ui_algoritmo.h"

Algoritmo::Algoritmo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Algoritmo)
{
    ui->setupUi(this);
}

Algoritmo::~Algoritmo()
{
    delete ui;
}

void Algoritmo::on_ejecutarPushButton_clicked()
{

}
