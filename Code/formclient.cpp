#include "formclient.h"
#include "ui_formclient.h"

FormClient::FormClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormClient)
{
    ui->setupUi(this);
}

FormClient::~FormClient()
{
    delete ui;
}
