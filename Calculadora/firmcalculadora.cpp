#include "firmcalculadora.h"
#include "ui_firmcalculadora.h"
#include <QDoubleValidator>

firmCalculadora::firmCalculadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::firmCalculadora)
{
    ui->setupUi(this);

    ui->lineEditA->setValidator(new QDoubleValidator(this));
    ui->lineEditB->setValidator(new QDoubleValidator(this));
}

firmCalculadora::~firmCalculadora()
{
    delete ui;
}

void firmCalculadora::closeEvent(QCloseEvent *ev)
{
    if(QMessageBox::question(this,
                             "Atenção",
                             "Deseja sair?",
                             QMessageBox::Yes |
                             QMessageBox::No) == QMessageBox::No){
        ev->ignore();
    }
}

void firmCalculadora::on_pushButtoCalcular_clicked()
{
    double a = ui->lineEditA->text().toDouble();
    double b = ui->lineEditB->text().toDouble();
    ui->lineEditC->setText(QString::number(a + b));
}
