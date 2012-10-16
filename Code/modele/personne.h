#ifndef PERSONNE_H
#define PERSONNE_H

#include <QString>
#include <QDate>

#include "modele/bateau.h"

class Personne
{
public:
    Personne(QString _nom, QString _Prenom, bool _sexe);
    bool isSkipper() { return skipper;}
private:
    QString nom;
    QString prenom;
    bool sexe; // 0 = Homme, 1=Femme
    bool skipper;
    QString nationalite;
    QDate naissance;
};

class Skipper:Personne
{
public:
    Skipper(QString _nom, QString _prenom, bool _sexe);
    ~Skipper();
};

class Employe:Personne
{
public:
    Employe(QString _nom, QString _prenom, bool _sexe, QString _poste);
    ~Employe();
    QString poste;
};

class Client:Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe);
    Permis permis;
};

#endif // PERSONNE_H
