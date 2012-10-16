#ifndef PERSONNE_H
#define PERSONNE_H

#include <QString>
#include <QDate>



class Personne
{
public:
    Personne(QString _nom, QString _Prenom, bool _sexe);
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
    Skipper();
    ~Skipper();
};

class Employe:Personne
{
public:
    Employe();
    ~Employe();
    QString poste;

};

#endif // PERSONNE_H
