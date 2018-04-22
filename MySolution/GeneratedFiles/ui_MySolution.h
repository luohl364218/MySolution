/********************************************************************************
** Form generated from reading UI file 'MySolution.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSOLUTION_H
#define UI_MYSOLUTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySolutionClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *firstValue;
    QLabel *label;
    QLineEdit *secondValue;
    QLabel *label_2;
    QLineEdit *resultValue;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *calcButton;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MySolutionClass)
    {
        if (MySolutionClass->objectName().isEmpty())
            MySolutionClass->setObjectName(QStringLiteral("MySolutionClass"));
        MySolutionClass->resize(600, 325);
        centralWidget = new QWidget(MySolutionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        firstValue = new QLineEdit(centralWidget);
        firstValue->setObjectName(QStringLiteral("firstValue"));
        firstValue->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(firstValue);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        secondValue = new QLineEdit(centralWidget);
        secondValue->setObjectName(QStringLiteral("secondValue"));
        secondValue->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(secondValue);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        resultValue = new QLineEdit(centralWidget);
        resultValue->setObjectName(QStringLiteral("resultValue"));
        resultValue->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(resultValue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        calcButton = new QPushButton(centralWidget);
        calcButton->setObjectName(QStringLiteral("calcButton"));

        horizontalLayout_2->addWidget(calcButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MySolutionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySolutionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        MySolutionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySolutionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MySolutionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MySolutionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MySolutionClass->setStatusBar(statusBar);

        retranslateUi(MySolutionClass);

        QMetaObject::connectSlotsByName(MySolutionClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySolutionClass)
    {
        MySolutionClass->setWindowTitle(QApplication::translate("MySolutionClass", "MySolution", Q_NULLPTR));
        label->setText(QApplication::translate("MySolutionClass", "+", Q_NULLPTR));
        label_2->setText(QApplication::translate("MySolutionClass", "=", Q_NULLPTR));
        calcButton->setText(QApplication::translate("MySolutionClass", "add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MySolutionClass: public Ui_MySolutionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSOLUTION_H
