#ifndef BALADE_H
#define BALADE_H

#include <QVector>
#include <QDateTime>
#include "modele/bateau.h"
#include "modele/personne.h"
//#include <unistd.h> // pour le time_t si on s'en sert

class Escale
{
public:
    QDateTime getDepart(void);
    QDateTime getArrivee(void);
private:
    QDateTime depart;
    QDateTime arrivee;
    QString nom;
};


class Balade
{
public:
    Balade();
private:
    unsigned int id_balade;
    QDateTime depart;
    QDateTime arrivee;
    QVector<Escale*> escales;
    Skipper* skipper;
    Bateau* bateau;
};

#endif // BALADE_H
