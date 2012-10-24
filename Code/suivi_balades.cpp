#include "suivi_balades.h"
#include "ui_suivi_balades.h"


#include <QFile>
#include <QString>
#include <Qdate>
#include <Qdir>
#include <QDebug>


Suivi_balades::Suivi_balades(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Suivi_balades)
{
    ui->setupUi(this);
    connect(ui->btn_retour,SIGNAL(clicked()),this,SLOT(retour()));


}

Suivi_balades::~Suivi_balades()
{
    delete ui;
}


void Suivi_balades::retour()
{

    this->hide();
    this->parentWidget()->show();
}
