#include "gestionclient.h"
#include "ui_gestionclient.h"
#include <QFile>
#include <QString>
#include <QDate>
#include <QDir>
#include <QTableView>
#include <QStandardItem>
#include <QTableWidget>

GestionClient::GestionClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionClient)
{
    QStringList entetes;
    entetes << "Nom" << "Prenom" << "Sexe" << "date de naissance" << "Nationalite";
    ui->setupUi(this);
    UserID = UserID_Initialization();
    codeGenerator();
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(entetes);
    ui->tableWidget->setLineWidth(1);
    initializationComboBox();
    connect(ui->recherche, SIGNAL(clicked()), this, SLOT(RechercheClient()));
    connect(ui->addclient, SIGNAL(clicked()), this, SLOT(ajouter()));
    connect(ui->listeClient, SIGNAL(clicked()), this, SLOT(afficher_Client()));
    connect(ui->modifier, SIGNAL(clicked()), this, SLOT(ModifierClient()));
    connect(ui->supprimer, SIGNAL(clicked()), this, SLOT(SupprimerClient()));
}

GestionClient::~GestionClient()
{
    //getID_User();
    delete ui;
}

//************************************
/*Methode qui crée un fichier dans lequel sont stockées les informations de l'utilisateur.
Chaque client sera identifié par son nom concaténé à un numéro.*/
void GestionClient::ajouter()
{
    QDate date;
    QString chaine;
    QFile file(Id_User());
    file.open(QIODevice::ReadWrite);
    QDataStream data(&file);
    data << Id_User();
    data << ui->numero->displayText();
    data << ui->nom->displayText();
    data << ui->prenom->displayText();
    data << ui->sexe->currentText();

    date = ui->DN->date();
    chaine = date.toString("dd-MM-yyyy");

    data << chaine;
    data << ui->nationalite->currentText();
    data << ui->permis->currentText();
    //ui->DN->getDate();
    ui->nom->setText(file.fileName());
    file.close();
    clear();
}

//************************************
/*La methode clear() permet de ré-initialiser les champs de l'interface*/
void GestionClient::clear()
{
    ui->nom->setText("");
    ui->prenom->setText("");
    ui->numero->setText("");
    ui->nationalite->setCurrentIndex(0);
    ui->permis->setCurrentIndex(0);
    ui->sexe->setCurrentIndex(0);
    QDate date;
    ui->DN->setDate(date.currentDate());
    codeGenerator();
}

//************************************
/*la methode codeGenerator() : elle est appelée automatiquement. Elle génére un numéro en incrémentant la variable globale UserID*/
void GestionClient::codeGenerator()
{
    QVariant v;
    UserID++;
    v.setValue(UserID);
    QString s = v.toString();
    ui->numero->setText(s);
}

//************************************
/*Cette methode permet d'initialiser la variable UserID.*/
int GestionClient::UserID_Initialization()
{
    int j = 0;
    QFileInfoList list = QDir::current().entryInfoList();
    for (int i = 2; i < list.size(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        j = i;
    }
    return j+1;
}

//************************************
/*Initialisation de la variable sexe qui est la civilité du client.*/
/*Pour plus de facilité de gestion, la liste des Pays sera stockée dans un fichier.
  Dans ce cas un parcours de ce fichier pourra être effectué afin d'initialiser la variable listePays.*/

void GestionClient::initializationComboBox()
{

    QStringList listeCivilite;
    QStringList listePays;
    QStringList typePermis;
    QDate date;
    QString pays = "";
    listeCivilite << "" << "Masculin" << "Feminin";

    typePermis << "" << "A" << "B" << "C" << "D";

    ui->sexe->addItems(listeCivilite);
    ui->permis->addItems(typePermis);
    ui->DN->setDate(date.currentDate());

    QFile file("pays.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        char * l = line.data();
        pays = pays + "," + l;
    }
    listePays = pays.split(",");
    ui->nationalite->addItems(listePays);
    file.close();
}

//************************************
QString GestionClient::Id_User()
{
    QString id = "cli_" + ui->nom->displayText() + ui->prenom->displayText() + ".txt";
    return id;
}



//*************************************
/*
 Affichage de la liste des clients.
 On parcourt le dossier contenant la liste des fichiers clients. Chaque fichier sera ouvert.
 On récupère ainsi les informations sur le client.
*/
void GestionClient::afficher_Client()
{


    //dir.setFilter(QDir::Files);
    QFileInfoList list = QDir::current().entryInfoList();
    for (int i = 0; i <= list.size(); i++)
    {
        effacer();
    }
    int j = 0;
    for (int i = 2; i < list.size(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        remplir(fileInfo.absoluteFilePath(), j);
        j++;
    }
    ui->traitementClient->setText("");
}


void GestionClient::effacer()
{
    ui->tableWidget->removeRow(0);
}

void GestionClient::remplir(QString fichier, int line)
{
    QFile file(fichier);
    QString fichier1, numero, nom , prenom, DN, sexe, nationalite, permis;
    QTableWidgetItem *newItem[5];
    newItem[0] = new QTableWidgetItem();
    newItem[1] = new QTableWidgetItem();
    newItem[2] = new QTableWidgetItem();
    newItem[3] = new QTableWidgetItem();
    newItem[4] = new QTableWidgetItem();
    if(!file.exists())
    {
        //ui->erreur->setText(fichier + ": n'existe pas");
        return;
    }
    else
    {
        file.open(QIODevice::ReadOnly);
        QDataStream in(&file);
        in >>fichier1 >> numero >> nom >> prenom >> sexe >> DN >> nationalite >> permis;
        newItem[0]->setText(nom);
        newItem[1]->setText(prenom);
        newItem[2]->setText(sexe);
        newItem[3]->setText(DN);
        newItem[4]->setText(nationalite);

        ui->tableWidget->insertRow(line);
        ui->tableWidget->setItem(line, 0, newItem[0]);//nom
        ui->tableWidget->setItem(line, 1, newItem[1]);//prenom
        ui->tableWidget->setItem(line, 2, newItem[2]);
        ui->tableWidget->setItem(line, 3, newItem[3]);
        ui->tableWidget->setItem(line, 4, newItem[4]);
            //*****************
       file.close();
    }
}

void GestionClient::RechercheClient()
{
    ui->ResultatRecherche->setText("");
    ui->traitementClient->setText("");
    QString nom_client = ui->nom_2->displayText();
    QString prenom_client = ui->r_prenom->displayText();
    if (nom_client == "" || prenom_client == "")
    {
        ui->ResultatRecherche->setText("Champs de saisi vide !!!!");
        return;
    }
    else
    {
        QString fichier = "cli_" + nom_client + prenom_client + ".txt";
        QFile file(fichier);
        if (!file.exists()){
            ui->ResultatRecherche->setText("Le client " + nom_client + " " + prenom_client + " n'existe pas.");
            return;
        }
        else
        {
            file.open(QIODevice::ReadWrite);
            QDataStream in(&file);
            QString fichier1, numero, nom , prenom, DN, sexe, nationalite, permis;
            in >>fichier1 >> numero >> nom >> prenom >> sexe >> DN >> nationalite >> permis;
            ui->sexe_2->setText(sexe);
            ui->nom_3->setText(nom);
            ui->prenom_2->setText(prenom);
            //ui->DN_2->setDate();
            ui->nationalite_2->setText(nationalite);
            file.close();
        }
    }
}

void GestionClient::ModifierClient()
{
    QString sexe, nom, prenom, DN, nationalite;
    ui->traitementClient->setText("");
    sexe = ui->sexe_2->displayText();
    nom = ui->nom_3->displayText();
    prenom = ui->prenom_2->displayText();
    DN = ui->DN_2->date().toString("dd-MM-yyyy");
    nationalite = ui->nationalite_2->displayText();

    if (sexe == "" || nom == "" || prenom == "" || nationalite == "")
    {
        ui->traitementClient->setText("Erreur de saisi");
        return;
    }
    else
    {
        QString fichier = "cli_" + nom + prenom + ".txt";

        QFile file1(fichier);
        file1.remove(fichier);
        //QDate
        QFile file(fichier);
        file.open(QIODevice::ReadWrite);
        QDataStream in(&file);
        QString fichier1, numero1, nom1 , prenom1, DN1, sexe1, nationalite1, permis1;
        in >>fichier1 >> numero1 >> nom1 >> prenom1 >> sexe1 >> DN1 >> nationalite1 >> permis1;
        sexe1 = sexe;
        nom1 = nom;
        prenom1 = prenom;
        DN1 = DN;
        nationalite1 = nationalite;
        in << fichier1;
        in << numero1;
        in << nom1;
        in << prenom1;
        in << sexe1;
        in << DN1;
        in << nationalite1;
        in << permis1;
        file.close();
        ui->sexe_2->setText("");
        ui->nom_3->setText("");
        ui->prenom_2->setText("");
        ui->nationalite_2->setText("");
        ui->DN_2->setDate(QDate::currentDate());
        ui->traitementClient->setText("Modification effectuée :-)");
    }
}

void GestionClient::SupprimerClient()
{
    QString sexe, nom, prenom, DN, nationalite;
    ui->traitementClient->setText("");
    sexe = ui->sexe_2->displayText();
    nom = ui->nom_3->displayText();
    prenom = ui->prenom_2->displayText();
    //DN = ui->DN_2->date();
    nationalite = ui->nationalite_2->displayText();

    if (sexe == "" || nom == "" || prenom == "" || nationalite == "")
    {
        ui->traitementClient->setText("Erreur de saisi");
        return;
    }
    else
    {
        QString fichier = "cli_" + nom + prenom + ".txt";
        QFile file(fichier);
        file.remove(fichier);
        ui->traitementClient->setText("Utilisateur supprimé :-)");
        ui->sexe_2->setText("");
        ui->nom_3->setText("");
        ui->prenom_2->setText("");
        ui->nationalite_2->setText("");
    }
}
