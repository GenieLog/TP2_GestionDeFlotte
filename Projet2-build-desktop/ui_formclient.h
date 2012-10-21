/********************************************************************************
** Form generated from reading UI file 'formclient.ui'
**
** Created: Sun Oct 21 18:31:45 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCLIENT_H
#define UI_FORMCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormClient
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nom_cl;
    QLineEdit *prenom_cl;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QLineEdit *natio_cl;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *FormClient)
    {
        if (FormClient->objectName().isEmpty())
            FormClient->setObjectName(QString::fromUtf8("FormClient"));
        FormClient->resize(332, 469);
        pushButton = new QPushButton(FormClient);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 410, 97, 27));
        pushButton_2 = new QPushButton(FormClient);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 410, 97, 27));
        layoutWidget = new QWidget(FormClient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 261, 261));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nom_cl = new QLineEdit(layoutWidget);
        nom_cl->setObjectName(QString::fromUtf8("nom_cl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nom_cl);

        prenom_cl = new QLineEdit(layoutWidget);
        prenom_cl->setObjectName(QString::fromUtf8("prenom_cl"));

        formLayout->setWidget(2, QFormLayout::FieldRole, prenom_cl);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, dateEdit);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);

        natio_cl = new QLineEdit(layoutWidget);
        natio_cl->setObjectName(QString::fromUtf8("natio_cl"));

        formLayout->setWidget(8, QFormLayout::FieldRole, natio_cl);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(false);

        formLayout->setWidget(11, QFormLayout::FieldRole, radioButton_2);

        textBrowser = new QTextBrowser(FormClient);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 281, 51));

        retranslateUi(FormClient);

        QMetaObject::connectSlotsByName(FormClient);
    } // setupUi

    void retranslateUi(QWidget *FormClient)
    {
        FormClient->setWindowTitle(QApplication::translate("FormClient", "Formulaire client", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FormClient", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FormClient", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormClient", "Nom", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FormClient", "Aucun", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormClient", "Permis c\303\264tier", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormClient", "Hauturier", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("FormClient", "Pr\303\251nom", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormClient", "Permis", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormClient", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormClient", "Nationnalit\303\251", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormClient", "Sexe", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("FormClient", "Homme", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("FormClient", "Femme", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("FormClient", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">Formulaire Client</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormClient: public Ui_FormClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCLIENT_H
