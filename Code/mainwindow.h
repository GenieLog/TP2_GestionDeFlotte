#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qvector.h>
#include <qmap.h>

#include <QModelIndex>
#include <QTableWidgetItem>
#include "formclient.h"

#include "modele/bateau.h"
#include "modele/client.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // liste de tous les bateaux et des clients
    QVector<Bateau*> bateaux;
    QVector<Client*> clients;
    // liste de toutes les assoviations pointeur-objets
    QMap<unsigned int, void*> pmap;
public slots:
    void clientAdded(FormClient *form);
//    void bateauAdded();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();


    void affiche_tableClient();
    void on_tableClient_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    void ajouteLigneClient(Client* c);
    void ajouteLigneBateau(Bateau *b );
};

#endif // MAINWINDOW_H
