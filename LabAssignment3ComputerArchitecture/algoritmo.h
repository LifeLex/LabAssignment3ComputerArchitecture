#ifndef ALGORITMO_H
#define ALGORITMO_H

#include <QWidget>

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

private:
    Ui::Algoritmo *ui;
};

#endif // ALGORITMO_H
