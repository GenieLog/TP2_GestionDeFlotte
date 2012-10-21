#ifndef FORMCLIENT_H
#define FORMCLIENT_H

#include <QWidget>

namespace Ui {
    class FormClient;
}

class FormClient : public QWidget
{
    Q_OBJECT

public:
    explicit FormClient(QWidget *parent = 0);
    ~FormClient();

private:
    Ui::FormClient *ui;
};

#endif // FORMCLIENT_H
