/********************************************************************************
** Form generated from reading UI file 'formbateau.ui'
**
** Created: Wed Oct 24 19:40:55 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBATEAU_H
#define UI_FORMBATEAU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBateau
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QProgressBar *progressBar;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_8;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *FormBateau)
    {
        if (FormBateau->objectName().isEmpty())
            FormBateau->setObjectName(QString::fromUtf8("FormBateau"));
        FormBateau->resize(372, 440);
        textBrowser = new QTextBrowser(FormBateau);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 0, 261, 81));
        pushButton = new QPushButton(FormBateau);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 400, 97, 27));
        pushButton_2 = new QPushButton(FormBateau);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 400, 97, 27));
        label_7 = new QLabel(FormBateau);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 330, 271, 17));
        progressBar = new QProgressBar(FormBateau);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 360, 271, 23));
        progressBar->setValue(0);
        layoutWidget = new QWidget(FormBateau);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 90, 276, 221));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dateEdit);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, doubleSpinBox);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        retranslateUi(FormBateau);

        QMetaObject::connectSlotsByName(FormBateau);
    } // setupUi

    void retranslateUi(QWidget *FormBateau)
    {
        FormBateau->setWindowTitle(QApplication::translate("FormBateau", "Formulaire Bateau", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("FormBateau", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt;\">Formulaire Bateau</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FormBateau", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FormBateau", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormBateau", "Progression avant la prochaine r\303\251vision", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormBateau", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormBateau", "Type de bateau", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormBateau", "Nombre de places", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormBateau", "Prix(/jour/pers.)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormBateau", "Mise \303\240 l'eau", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormBateau", "Heures d'utilisation", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FormBateau", "Marque", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormBateau: public Ui_FormBateau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBATEAU_H
