#include "formbateau.h"
#include "ui_formbateau.h"

FormBateau::FormBateau(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormBateau)
{
    ui->setupUi(this);
}

FormBateau::~FormBateau()
{
    delete ui;
}
