#include "formclient.h"
#include "ui_formclient.h"
#include "modele/client.h"

FormClient::FormClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormClient)
{
    ui->setupUi(this);
}

FormClient::~FormClient()
{
    this->hide();
    delete ui;
}

void FormClient::on_pushButton_clicked()
{
    delete client;
    this->hide();
    delete this;
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
    if(client) {
        if(ui->comboBox->currentIndex()==0x02)
            client->setPermis(P_HAUTURIER);
        if(ui->comboBox->currentIndex()==0x01)
            client->setPermis(P_COTIER);
        else
            this->client->setPermis(AUCUN);
        emit clientAdded(this);//clientAdded(this);
    }

}

void FormClient::on_comboBox_currentIndexChanged(const QString &arg1)
{
}
