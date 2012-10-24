#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formclient.h"
#include "formbateau.h"

#include <QtDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->tableClient->size();
}

MainWindow::~MainWindow()
{
    // sauvegarde des objects et des references
    // destructeur dans les listes

    delete ui;
}

/**
  @brief ajoute une ligne dans les tableau de clients a partir d'un objet Client
  */
void MainWindow::ajouteLigneClient(Client *c = NULL)
{
    int row = ui->tableClient->rowCount();
    ui->tableClient->insertRow(row);
    if(c)
    {
        ui->tableClient->setItem(row,1, new QTableWidgetItem( c->getNom()));
        ui->tableClient->setItem(row,2, new QTableWidgetItem( c->getPrenom()));
        ui->tableClient->setItem(row,3, new QTableWidgetItem( c->getNaissance().toString("d/M/yy")));
        ui->tableClient->setItem(row,4, new QTableWidgetItem( c->getPermis()));
/*        ui->tableClient->setItem(row,3, new QTableWidgetItem( c->getSexe()? "H":"F"));
        ui->tableClient->setItem(row,4, new QTableWidgetItem( c->getNationalite()));
*/    }
    ui->tableClient->update();

}

/**
  @brief slot pour ajouter le client dans la liste et l'affichage
*/
void MainWindow::clientAdded(FormClient *form)
{
    this->clients.append(form->client);
    ajouteLigneClient(form->client);
    delete form;

}

/**
  @brief  affiche le formulaire d'ajout client
  boutton ajoute client
*/
void MainWindow::on_pushButton_clicked()
{

    FormClient *w = new FormClient();
    QObject::connect(w, SIGNAL(clientAdded(FormClient*)),
                         this, SLOT(clientAdded(FormClient*)));

    w->show();
}

/**
  TODO
*/
void MainWindow::ajouteLigneBateau(Bateau *b = NULL)
{
    int row = ui->tableBateau->rowCount();
    ui->tableBateau->insertRow(row);
    ui->tableBateau->setVerticalHeaderItem(row,new QTableWidgetItem(QString::number(row)));
    if(b)
    {
        ui->tableBateau->setItem(row,1, new QTableWidgetItem(b->getMarque()));
//        ui->tableBateau->setItem(row,2, new QTableWidgetItem( b->getTypeBateau()));
   }
    ui->tableBateau->update();

}

/**
  @brief  affiche le formulaire d'ajout d'un bateau
          boutton ajoute bateau
*/
void MainWindow::on_pushButton_4_clicked()
{
    FormBateau *w = new FormBateau();
    w->show();

    // ajout dans la liste des bateaux
    if (w->bateau) {
        bateaux << w->bateau;
        ajouteLigneBateau(w->bateau);
    }
}

// non utilisee mais le slot est g�n�r�
void MainWindow::on_tableClient_activated(const QModelIndex &index)
{
}

/**
  Aidera a afficher les donnees sauvegard�es
*/
void MainWindow::affiche_tableClient()
{
    int row = ui->tableClient->rowCount();
    int col = ui->tableClient->columnCount();
    qDebug() << "row" <<row;
    qDebug() << "column" <<col;


    for(int i=0; i< clients.size(); i++)
    {
//        qDebug() << i << " " << clients[i]->getNom()<< endl;
        ajouteLigneClient(clients[i]);
    }
    ui->tableClient->update();
}

/**
  @brief  edition d'une ligne s�lectionn�e dans le tableau de client
  @todo
*/
void MainWindow::on_pushButton_2_clicked()
{
    int row=ui->tableClient->currentRow();
    // editer client
    qDebug() << "current row "<< row;
}

/**
  @brief  supprime la ligne s�lectionn�e dans le tableau des clients
*/
void MainWindow::on_pushButton_3_clicked()
{
    int row=ui->tableClient->currentRow();
    // supprimer client
    ui->tableClient->removeRow(ui->tableClient->currentRow());
    delete clients[row];
    clients.remove(row);

}
