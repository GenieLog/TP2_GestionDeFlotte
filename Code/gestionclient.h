#ifndef GESTIONCLIENT_H
#define GESTIONCLIENT_H

#include <QDialog>
#include <QTableWidget>
#include <QTableView>
#include <QFile>

namespace Ui {
    class GestionClient;
}

class GestionClient : public QDialog
{
    Q_OBJECT

public:
    explicit GestionClient(QWidget *parent = 0);
    ~GestionClient();
    QString repertoire;

protected slots:
    void ajouter();
    QString Id_User();
    void clear();
    void codeGenerator();
    int UserID_Initialization();
    void initializationComboBox();
   // void getID_User();
   // QStringList recherche_Client(QString, QString); on cherche un client bien préci avec son nom et son prénom
//    void afficher_Client(QStringList); On affiche un seul client
    void afficher_Client(); //affiche tous les clients de la base de données
    void effacer();
    void remplir(QString, int);
    void RechercheClient();// Cherche le nom d'un client en fonction du nom
    void SupprimerClient();
    void ModifierClient();


private:
    Ui::GestionClient *ui;
    qint32 UserID;
    QTableView *_table;
};

#endif // GESTIONCLIENT_H
