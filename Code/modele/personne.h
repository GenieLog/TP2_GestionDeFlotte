#ifndef PERSONNE_H
#define PERSONNE_H

#include <QString>
#include <QDate>



class Personne
{
public:
    Personne(QString _nom, QString _Prenom, bool _sexe);
    bool isSkipper() { return false;}
private:
    QString nom;
    QString prenom;
    bool sexe; // 0 = Homme, 1=Femme
    QString nationalite;
    QDate naissance;
};

class Skipper:Personne
{
public:
    Skipper(QString _nom, QString _Prenom, bool _sexe);
    ~Skipper();
    bool isSkipper() { return false;}
};

class Employe:Personne
{
public:
    Employe(QString _nom, QString _Prenom, bool _sexe, QString _poste);
    ~Employe();
    QString poste;

};

#endif // PERSONNE_H
