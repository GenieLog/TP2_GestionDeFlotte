#include "modele/bateau.h"
#include "serializable.h"
#include <QString>
#include <QTextStream>
#include <QtCore>
#include <QtDebug>
#include <QRegExp>

Bateau::Bateau(QString nom,QString marque, qint16 id_type, quint8 places, float prix, QDate MisALeau,float heures )
{
    _nom = nom;
    _marque = marque;
    _places = places;
    _prix = prix ;
    _MisALeau = MisALeau ;
    _heures =heures;

}
/*
void Bateau::load(QDataStream & in)
{
    in >> _nom ;
}*/

bool Bateau::save()
{
    int ID;
    QFile file("bdd/bateaux.txt");
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

    flux  << ID <<"#" << _nom <<"#"<<_marque <<"#" << _places  <<"#" << _prix << "#"<< _MisALeau.toString("d/M/yy") << "#" << _heures << endl;
    return true;
}


