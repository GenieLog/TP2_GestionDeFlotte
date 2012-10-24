#include "formbateau.h"
#include "ui_formbateau.h"

FormBateau::FormBateau(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormBateau)
{
    ui->setupUi(this);
    bateau = NULL;
}

FormBateau::~FormBateau()
{
    delete ui;
}
