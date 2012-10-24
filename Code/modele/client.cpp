#include "modele/client.h"
#include <QTextStream>
#include <QtCore>
#include <QtDebug>
#include <QRegExp>


Client::Client(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance)
    : Personne(nom ,prenom, sexe, nationalite, naissance)
{_skipper = false;
}

<<<<<<< HEAD
QString Client::getPermis()
{
    QString str;
    switch (this->_permis)
    {
    case P_HAUTURIER:
        str = "Hauturier";
        break;
    case P_COTIER:
        str = "cotier";
        break;
    default:
        str="Aucun";
        break;
    }

    return str;
}
void Client::load(QDataStream & in)
{
    in >> _nom >> _prenom >> _sexe >> _nationalite >> _naissance >> _skipper ; //permis.load();
=======
>>>>>>> d71853d4fc69b5d6b94f40015fc1fff9a64861e8


bool Client::save()
{
    int ID;
    QFile file("bdd/clients.txt");
    if(!file.exists() )
   ID=0;
    else
    {
 file.open(QIODevice::ReadOnly);

 QString mot;
 QTextStream stream(&file);
 qint32 max(0);
 QRegExp idre("^([0-9]+)#");
 while(! stream.atEnd())
 {
    QString ligne = stream.readLine();

    idre.indexIn(ligne);
    mot = idre.cap(1);

    ID=mot.toInt();
    if(max<ID)
        max =ID;
 }

 ID++;
file.close();
    }
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return false;

    QTextStream flux(&file);

    flux.setCodec("UTF-8");

    flux  << ID <<"#" << _nom <<"#"<< _prenom <<"#" << _sexe  <<"#" << _nationalite << "#"<< _naissance.toString("d/M/yy") << endl;
    return true;
}



