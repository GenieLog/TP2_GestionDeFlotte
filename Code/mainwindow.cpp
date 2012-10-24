#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formclient.h"
#include "formbateau.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableClient->size();

/*    {
    QVector<Client*>:: iterator &it_cl = clients.begin();
    do {
        ui->tableClient->insertRow(1);
//        ui->tableClient;
    } while(it_cl.next() != it_cl.end());
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
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    FormBateau *w = new FormBateau();
    w->show();
    // ajout dans la liste globale des clients
    if (w->bateau) {
        this->bateaux.append(w->bateau);
        // update affichage
    }
}

