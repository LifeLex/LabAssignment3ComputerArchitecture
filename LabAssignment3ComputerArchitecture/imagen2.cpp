#include "imagen2.h"
#include "ui_imagen2.h"

Imagen2::Imagen2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Imagen2)
{
    ui->setupUi(this);
}

Imagen2::~Imagen2()
{
    delete ui;
}

void Imagen2::setOrigen(QString ubicacion) { directorioOrigen = ubicacion; }
void Imagen2::setDestino(QString ubicacion) { directorioDestino = ubicacion; }
QString Imagen2::getOrigen() { return directorioOrigen; }
QString Imagen2::getDestino() { return directorioDestino; }


void Imagen2::on_pushButton_clicked()
{
    //Get and display locations
    QString directorioOrigen = QFileDialog::getExistingDirectory(this, tr(""), "Origen",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    QString directorioDestino = QFileDialog::getExistingDirectory(this, tr(""), "Destino",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->lineEdit->setText(directorioOrigen);
    ui->lineEdit_2->setText(directorioDestino);

    //Save locations
    setOrigen(directorioOrigen);
    setDestino(directorioDestino);
    ui->pushButton_2->setEnabled(true);
}

void Imagen2::on_pushButton_2_clicked()
{
    ui->progressBar->setEnabled(true);
    ui->progressBar->setValue(0);
    int x = 0;
    QDir origen;
    origen.setPath(getOrigen());

    QDir destino;
    destino.setPath(getDestino());

    //Make separate directories in destination for b&w en negative
    QDir destinoBW;
    destinoBW.mkdir(getDestino() + "/b&w");

    QDir destinoNeg;
    destinoNeg.mkdir(getDestino() + "/negativo");

    QStringList fileFilter; //Filtro para el tipo de archivo
    origen.setNameFilters(QStringList()<< "*.png"<< "*.jpg");
    QStringList infoList = origen.entryList(fileFilter, QDir::Files);//Solo Imagenes no directorios
    int total = infoList.count();//#archivos en carpeta
    QImage imagen;
    QImage bw;
    QImage negativo;

    //Inicio Tiempo
    QTime myTimer;
    QElapsedTimer timer;
    myTimer.start();
    timer.start();
    unsigned clockstart = clock();

    for (int i = 0; i < total; ++i) {
        QFileInfo fileInfo = infoList.at(i); //Coger elemento de la lista
        imagen.load(getOrigen() + "/" + fileInfo.filePath());//Cargar imagen a traves de la ruta
        //to display file name: cout << fileInfo.fileName().toStdString() << endl;
        //B&W
        bw = imagen.convertToFormat(QImage::Format_Mono);
        bw.save(getDestino() + "/b&w/" + fileInfo.filePath());

        //NEGATIVO
        negativo = imagen.convertToFormat(QImage::Format_ARGB32);
        negativo.invertPixels();
        negativo.save(getDestino() + "/negativo/" + fileInfo.filePath());
        double progress = (double) (i+1) / (double)total;
        ui->progressBar->setValue(progress*100);
    }

    //Final Tiempo
    unsigned clockend = clock();
    double finalTime = (double(clockstart-clockend)/CLOCKS_PER_SEC);
    int nMiliseconds = myTimer.elapsed();
    std::string txt;
    txt=std::to_string(nMiliseconds);
    txt.append(" ms");

    //Display execution time
    if (auxPrint==0&&x==0) {
        ui->lineEdit_3->setText(QString::fromStdString(txt));
        auxPrint++;
    } else if (auxPrint==1&&x==0) {
        ui->lineEdit_4->setText(QString::fromStdString(txt));
        auxPrint++;
    } else if (auxPrint==2&&x==0) {
        ui->lineEdit_5->setText(QString::fromStdString(txt));
        auxPrint++;
    } else if (auxPrint==3&&x==0) {
        ui->lineEdit_6->setText(QString::fromStdString(txt));
        auxPrint++;
    } else if (auxPrint==4&&x==0) {
        ui->lineEdit_7->setText(QString::fromStdString(txt));
        auxPrint++;
    }

    suma = suma+ nMiliseconds;

    //Display media
    if (auxPrint>0) {
        media=suma/auxPrint;
        QString txtmedia;
        txtmedia = QString::number(media, 'g', 5);
        txtmedia.append(" ms");
        ui->lineEdit_8->setText(txtmedia);
        if(auxPrint == 5) {
            auxPrint = 0;
            suma = 0;
        }
    }
    //ui->progressBar->setValue(0);
}

void Imagen2::on_pushButton_3_clicked()
{
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->progressBar->setValue(0);
    media = 0;
    suma = 0;
    auxPrint = 0;
}
