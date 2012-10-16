#ifndef BALADE_H
#define BALADE_H

#include <QVector>
#include <QDateTime>
//#include <unistd.h> // pour le time_t si on s'en sert

class Balade
{
public:
    Balade();
private:
    unsigned int id_balade;
    QDateTime depart;
    QDateTime arrivee;
    QVector<Escale*> escales;
//    Skiper* skipper;
//    Bateau* bateau;
};

#endif // BALADE_H
