#include "reservation.h"
#include "ui_reservation.h"
#include <QDir>

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
    init();
    connect(ui->save, SIGNAL(clicked()), this, SLOT(saveResa()));
    connect(ui->addpassager, SIGNAL(clicked()), this, SLOT(openClient()));
    connect(ui->printpassager, SIGNAL(clicked()), this, SLOT(afficher()));
}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::init()
{
    client = new add(this);
    QStringList entetes;
    entetes << "Nom" << "Prenom" << "Sexe" << "date de naissance" << "Nationalite";
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(entetes);
    ui->tableWidget->setLineWidth(1);
    QStringList listeCivilite;
    QStringList listePays;
    QStringList typePermis, typeBateau, typeBalade;
    QDate date;
    QString pays = "";

    listeCivilite << "" << "Masculin" << "Feminin";
    typeBateau << "" << "Bat_A" << "Bat_B" << "Bat_C" << "Bat_D";
    typeBalade << "" << "A" << "B" << "C" << "D";
    typePermis << "" << "E" << "F" << "G" << "H";

    ui->bateau->addItems(typeBateau);
    ui->balade->addItems(typeBalade);
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
    ui->pays->addItems(listePays);
    file.close();

}

void Reservation::saveResa()
{
    QString rep = QDate::currentDate().toString("dd-MM-yyyy");
    QString rep1 = QTime::currentTime().toString("hh-mm-ss");
    QString repertoire = "resa_" + rep + "_" + rep1;
    QDir d;
    d.mkdir(repertoire);
    QString tmp = "tmp";
    QDir tmpdir(tmp);
    //d = tmpdir;
    QFileInfoList list = tmpdir.entryInfoList();
    for (int i = 0; i < list.size(); ++i)
    {
        QString fichier = list.at(i).absoluteFilePath();
        QString name = list.at(i).bundleName() + ".txt";
        QString newfichier = repertoire + "/" + name;
        QFile::rename(fichier, newfichier);
    }
}

void Reservation::afficher()
{
    QString tmp = "tmp";
    QDir tmpdir(tmp);
    QFileInfoList list = tmpdir.entryInfoList();
    for (int i = 0; i <= list.size(); i++)
    {
        ui->tableWidget->removeRow(0);
    }
    int j = 0;
    for (int i = 2; i < list.size(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        remplir(fileInfo.absoluteFilePath(), j);
        j++;
    }
}
void Reservation::remplir(QString fichier, int line)
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

void Reservation::openClient()
{
    client->show();
}
