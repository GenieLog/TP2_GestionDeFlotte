#ifndef FORMBATEAU_H
#define FORMBATEAU_H

#include <QWidget>

namespace Ui {
    class FormBateau;
}

class FormBateau : public QWidget
{
    Q_OBJECT

public:
    explicit FormBateau(QWidget *parent = 0);
    ~FormBateau();

private:
    Ui::FormBateau *ui;
};

#endif // FORMBATEAU_H
