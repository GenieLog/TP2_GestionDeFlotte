#include "formbateau.h"
#include "ui_formbateau.h"
#include "modele/bateau.h"
#include <QtDebug>

FormBateau::FormBateau(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormBateau)
{
    ui->setupUi(this);
    bateau = NULL;
}

FormBateau::~FormBateau()
{
    delete ui;
}

void FormBateau::on_pushButton_2_clicked()
{
    QString nom(ui->lineEdit->text());
    QString marque(ui->lineEdit_2->text());
    int type (ui->comboBox->currentIndex());
    int places (ui->spinBox->value());
    int prix(ui->doubleSpinBox_2->value());
    QDate MisALeau (ui->dateEdit->date());
    float heures (ui->doubleSpinBox_2->value());

    bateau = new Bateau( nom, marque,  type,  places,  prix,  MisALeau, heures);
    qDebug() << bateau->getNom();
    if (bateau->save())
        this->hide();
}
