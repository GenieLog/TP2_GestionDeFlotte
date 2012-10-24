#include "formclient.h"
#include "ui_formclient.h"
#include "modele/client.h"

FormClient::FormClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormClient)
{
    ui->setupUi(this);
    client = NULL;
}

FormClient::~FormClient()
{
    delete ui;
}

void FormClient::on_pushButton_clicked()
{
    this->hide();
}


/**
  *\brief fonction qui s'execute lors de l'appui sur le bouton de sauvegarde du formulaire de client
  *
  *
  **/
void FormClient::on_pushButton_2_clicked()
{
    //    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
    QString nom ( ui->nom_cl->text());
    QString prenom ( ui->prenom_cl->text());
    QString natio ( ui->natio_cl->text());
    bool sex (ui->radioButton->isChecked());
    QDate birth (ui->dateEdit->date());
    client = new Client(nom,prenom,sex,natio,birth);
   if(client->save())
    this->hide();
   if(client)
       emit clientAdded(this);//clientAdded(this);


}
