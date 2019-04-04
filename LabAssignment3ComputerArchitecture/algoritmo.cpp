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


void Algoritmo::on_seleccionarpushButton_clicked()
{
    int x=0;
    //Escoger el fichero y meter los datos en el array
    fileName= QFileDialog::getOpenFileName(this,tr("Select a document"),".",tr("*.txt"));
    QFile file(fileName);
    //Error Message
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "Information", file.errorString());
    }
    QTextStream content(&file);

    //Inicio Tiempo
    QTime myTimer;
    QElapsedTimer timer;
    myTimer.start();
    timer.start();
    unsigned clockstart= clock();



    string = content.readAll();
    list = string.split(" ");

    int listaNumeros[list.size()];
    for (int i = 0;i<list.size();i++) {
        listaNumeros[i] = list.at(i).toInt();
    }
    for (int i = 0;i<list.size();i++) {
        cout<< listaNumeros[i] << endl;
    }
    file.close();

    int temp = 0;
    for (int i=1; i<list.size(); i++){
        for (int j=0 ; j<list.size()-1; j++){
            if (listaNumeros[j] > listaNumeros[j+1]){
                temp = listaNumeros[j];
                listaNumeros[j] = listaNumeros[j+1];
                listaNumeros[j+1] = temp;
            }
        }
    }

    unsigned clockend= clock();
    double finalTime = (double(clockstart-clockend)/CLOCKS_PER_SEC);
    int nMiliseconds = myTimer.elapsed();
    int nanosecs= timer.nsecsElapsed();
    std::string txt;
    txt=std::to_string(nMiliseconds);

    if (auxPrint==0&&x==0) {
        ui->lineEdit->setText(QString::fromStdString(txt));
        x++;
        auxPrint++;
    }

    if (auxPrint==1&&x==0) {
        ui->lineEdit_2->setText(QString::fromStdString(txt));
        x++;
        auxPrint++;
    }

    if (auxPrint==2&&x==0) {
        ui->lineEdit_3->setText(QString::fromStdString(txt));
        x++;
        auxPrint++;
    }

    if (auxPrint==3&&x==0) {
        ui->lineEdit_4->setText(QString::fromStdString(txt));
        x++;
        auxPrint++;
    }

    if (auxPrint==4&&x==0) {
        ui->lineEdit_5->setText(QString::fromStdString(txt));
        x++;
        auxPrint++;
    }
    /*
    if (auxPrint==5) {
        media=suma/5;
        std::string txtmedia;
        txtmedia= std::to_string(media);

        ui->mediaLineEdit->setText(QString::fromStdString(txtmedia));

    }
    */
    suma = suma+ nMiliseconds;


}

void Algoritmo::on_pushButton_clicked()
{
    media=suma/5;
    std::string txt;
    txt=std::to_string(media);
    ui->mediaLineEdit->setText(QString::fromStdString(txt));
}
