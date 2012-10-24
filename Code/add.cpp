#include "add.h"
#include "ui_add.h"
#include <QFile>
#include <QDir>

add::add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
    initializationComboBox();
    connect(ui->ajouter_2, SIGNAL(clicked()), this, SLOT(ajouter()));
}

add::~add()
{
    delete ui;
}
void add::ajouter()
{
    QDate date;
    QString chaine;
    QDir d;
    d.mkdir("tmp");
    QString s = d.absoluteFilePath("tmp");
    QString fichier = s + "/" + ui->nom_4->displayText() + ui->prenom_3->displayText() + ".txt";

    QFile file(fichier);
    file.open(QIODevice::ReadWrite);
    QDataStream data(&file);
    data << fichier;
    data << ui->numero_2->displayText();
    data << ui->nom_4->displayText();
    data << ui->prenom_3->displayText();
    data << ui->sexe_3->currentText();

    date = ui->DN_3->date();
    chaine = date.toString("dd-MM-yyyy");

    data << chaine;
    data << ui->nationalite_3->currentText();
    data << ui->permis_2->currentText();
    //ui->DN->getDate();
    //ui->nom->setText(file.fileName());
    file.close();
    clear();
}

void add::initializationComboBox()
{

    QStringList listeSexe;
    QStringList listePays;
    QStringList typePermis;
    QDate date;
    QString pays = "";
    listeSexe << "Masculin" << "Feminin";

    typePermis << "A" << "B" << "C" << "D";

    ui->sexe_3->addItems(listeSexe);
    ui->permis_2->addItems(typePermis);
    ui->DN_3->setDate(date.currentDate());

    QFile file("pays.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        char * l = line.data();
        pays = pays + "," + l;
    }
    listePays = pays.split(",");
    ui->nationalite_3->addItems(listePays);
    file.close();
}

void add::clear()
{
    ui->nom_4->setText("");
    ui->prenom_3->setText("");
    ui->numero_2->setText("0");
    ui->nationalite_3->setCurrentIndex(0);
    ui->permis_2->setCurrentIndex(0);
    ui->sexe_3->setCurrentIndex(0);
    QDate date;
    ui->DN_3->setDate(date.currentDate());

}
