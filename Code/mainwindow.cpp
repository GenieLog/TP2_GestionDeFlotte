#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formclient.h"
#include "formbateau.h"

#include <QTextStream>
#include <QtDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableClient->size();

/*    {
    }*/
}

MainWindow::~MainWindow()
{
    // sauvegarde des objects et des references
    // destructeur dans les listes

    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    FormClient *w = new FormClient();
    w->show();
    // ajout dans la liste globale des clients
    if (w->client) {
        this->clients.append(w->client);
        // update affichage
        ui->tableClient->insertRow(1);
        ui->tableClient->update();
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    FormBateau *w = new FormBateau();
    w->show();
    // ajout dans la liste des bateaux
    if (w->bateau) {
        bateaux << w->bateau;
        // update affichage
    }
    int row = ui->tableClient->rowCount();
    int col = ui->tableClient->columnCount();

    for(int i=row; i< row+clients.size(); i++)
    {
        int j=0;

        ui->tableClient->setItem(i, j++%col, new QTableWidgetItem(clients[i]->getNom()));
        ui->tableClient->setItem(i, j++%col, new QTableWidgetItem(clients[i]->getPrenom()));
//        ui->tableClient->insertRow(1);
    }
    ui->tableClient->update();
}

void MainWindow::on_tableClient_activated(const QModelIndex &index)
{
    QTextStream cout(stdout, QIODevice::WriteOnly);
    //QVector<Client*>:: iterator it;
    qDebug() << "index row" << index.row();
    qDebug() << "index column" << index.column();

    int row = ui->tableClient->rowCount();
    int col = ui->tableClient->columnCount();
    cout << "row " << row << endl;


    for(int i=row; i< row+clients.size(); i++)
    {
        int j=0;

        ui->tableClient->setItem(i, j++%col, new QTableWidgetItem(clients[i]->getNom()));
        ui->tableClient->setItem(i, j++%col, new QTableWidgetItem(clients[i]->getPrenom()));
//        ui->tableClient->insertRow(1);
    }
    ui->tableClient->update(index);
}
