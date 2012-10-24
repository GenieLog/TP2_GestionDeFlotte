#include "formclient.h"
#include "ui_formclient.h"
#include "modele/client.h"

#include <QDebug>

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

/**
  @brief  boutton annuler
*/
void FormClient::on_pushButton_clicked()
{
    if(client)
        delete client;
//    this->hide();
    delete this;
}


/**
  *\brief fonction qui s'execute lors de l'appui sur le bouton de sauvegarde du formulaire de client
  *@brief  remplit un objet client a partir du formulaire
  *@brief  emet un signal lorsque l'objet client est pret
  *
  **/
void FormClient::on_pushButton_2_clicked()
{
    QString nom ( ui->nom_cl->text());
    QString prenom ( ui->prenom_cl->text());
    QString natio ( ui->natio_cl->text());
    bool sex (ui->radioButton->isChecked());
    QDate birth (ui->dateEdit->date());
    client = new Client(nom,prenom,sex,natio,birth);
    if(client) {
//        qDebug() << "permis index " << ui->comboBox->currentIndex();
        if(ui->comboBox->currentIndex()==2)
            client->setPermis(P_HAUTURIER);
        else if(ui->comboBox->currentIndex()==1)
            client->setPermis(P_COTIER);
        else
            this->client->setPermis(AUCUN);
        if(client->save())
             this->hide();
        emit clientAdded(this);//clientAdded(this);
    }

}

void FormClient::on_comboBox_currentIndexChanged(const QString &arg1)
{
}
