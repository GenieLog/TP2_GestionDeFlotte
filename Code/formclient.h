#ifndef FORMCLIENT_H
#define FORMCLIENT_H

#include <QWidget>
#include "modele/client.h"

namespace Ui {
    class FormClient;
}

class FormClient : public QWidget
{
    Q_OBJECT

public:
    explicit FormClient(QWidget *parent = 0);
    ~FormClient();

    Client* client;
signals:
    void clientAdded(FormClient *form);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormClient *ui;
};

#endif // FORMCLIENT_H
