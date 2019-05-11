/********************************************************************************
** Form generated from reading UI file 'firmcalculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMCALCULADORA_H
#define UI_FIRMCALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firmCalculadora
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditC;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtoCalcular;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *firmCalculadora)
    {
        if (firmCalculadora->objectName().isEmpty())
            firmCalculadora->setObjectName(QStringLiteral("firmCalculadora"));
        firmCalculadora->resize(527, 291);
        firmCalculadora->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(10, 36, 17, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(48, 0, 1);\n"
"}"));
        centralWidget = new QWidget(firmCalculadora);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(label);

        lineEditA = new QLineEdit(centralWidget);
        lineEditA->setObjectName(QStringLiteral("lineEditA"));

        horizontalLayout->addWidget(lineEditA);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEditB = new QLineEdit(centralWidget);
        lineEditB->setObjectName(QStringLiteral("lineEditB"));

        horizontalLayout_2->addWidget(lineEditB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEditC = new QLineEdit(centralWidget);
        lineEditC->setObjectName(QStringLiteral("lineEditC"));
        lineEditC->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditC);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtoCalcular = new QPushButton(centralWidget);
        pushButtoCalcular->setObjectName(QStringLiteral("pushButtoCalcular"));
        pushButtoCalcular->setTabletTracking(false);

        horizontalLayout_4->addWidget(pushButtoCalcular);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        firmCalculadora->setCentralWidget(centralWidget);

        retranslateUi(firmCalculadora);
        QObject::connect(lineEditA, SIGNAL(returnPressed()), pushButtoCalcular, SLOT(click()));
        QObject::connect(lineEditB, SIGNAL(returnPressed()), pushButtoCalcular, SLOT(click()));

        QMetaObject::connectSlotsByName(firmCalculadora);
    } // setupUi

    void retranslateUi(QMainWindow *firmCalculadora)
    {
        firmCalculadora->setWindowTitle(QApplication::translate("firmCalculadora", "Calculadora", nullptr));
        label->setText(QApplication::translate("firmCalculadora", "1 Numero", nullptr));
        label_2->setText(QApplication::translate("firmCalculadora", "2 Numero", nullptr));
        label_3->setText(QApplication::translate("firmCalculadora", "Resultado", nullptr));
        pushButtoCalcular->setText(QApplication::translate("firmCalculadora", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firmCalculadora: public Ui_firmCalculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMCALCULADORA_H
