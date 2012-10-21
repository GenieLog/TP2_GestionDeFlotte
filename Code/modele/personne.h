#ifndef PERSONNE_H
#define PERSONNE_H

#include <QString>
#include <QDate>
#include "modele/bateau.h"
class Personne
{
protected:
    QString _nom;
    QString _prenom;
    bool _sexe; // 1 = Homme, 0=Femme
    QString _nationalite;
    QDate _naissance;
    bool _skipper;
public:
    Personne(QString _nom, QString _Prenom, bool _sexe, QString _nationalite, QDate _naissance);

    void setNom(QString nom){ _nom=nom;}
    void setPrenom(QString prenom){ _prenom=prenom;}
    void setSexe(bool sexe){ _sexe=sexe;}
    void setNationalite(QString nationalite){ _nationalite=nationalite;}
    void setNaissance(QDate naissance){ _naissance=naissance;}
    void setSkipper(){ _skipper = true;}

    QString getNom(){ return _nom;}
    QString getPrenom(){ return _prenom;}
    bool getSexe(){ return _sexe;}
    QString getNationalite(){ return _nationalite;}
    QDate getNaissance(){ return _naissance;}
    bool getSkipper(){ return _skipper;}

    bool isSkipper() { return _skipper;}

};

#endif // PERSONNE_H
