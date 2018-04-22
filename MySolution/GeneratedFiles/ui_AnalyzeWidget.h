/********************************************************************************
** Form generated from reading UI file 'AnalyzeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZEWIDGET_H
#define UI_ANALYZEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalyzeWidgetClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushBtn_vzoomin;
    QPushButton *pushBtn_vzoomout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushBtn_origin;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_5;
    QFrame *chartFrame;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_vpp;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label_sequence;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushBtn_hzoomout;
    QPushButton *pushBtn_hzoomin;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QSpinBox *nodeIdSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QSpinBox *nodeChanSpinBox;
    QPushButton *chartShowButton;

    void setupUi(QWidget *AnalyzeWidgetClass)
    {
        if (AnalyzeWidgetClass->objectName().isEmpty())
            AnalyzeWidgetClass->setObjectName(QStringLiteral("AnalyzeWidgetClass"));
        AnalyzeWidgetClass->resize(600, 400);
        gridLayout = new QGridLayout(AnalyzeWidgetClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushBtn_vzoomin = new QPushButton(AnalyzeWidgetClass);
        pushBtn_vzoomin->setObjectName(QStringLiteral("pushBtn_vzoomin"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushBtn_vzoomin->sizePolicy().hasHeightForWidth());
        pushBtn_vzoomin->setSizePolicy(sizePolicy);
        pushBtn_vzoomin->setMinimumSize(QSize(20, 30));
        pushBtn_vzoomin->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushBtn_vzoomin);

        pushBtn_vzoomout = new QPushButton(AnalyzeWidgetClass);
        pushBtn_vzoomout->setObjectName(QStringLiteral("pushBtn_vzoomout"));
        sizePolicy.setHeightForWidth(pushBtn_vzoomout->sizePolicy().hasHeightForWidth());
        pushBtn_vzoomout->setSizePolicy(sizePolicy);
        pushBtn_vzoomout->setMinimumSize(QSize(20, 30));
        pushBtn_vzoomout->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(pushBtn_vzoomout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushBtn_origin = new QPushButton(AnalyzeWidgetClass);
        pushBtn_origin->setObjectName(QStringLiteral("pushBtn_origin"));
        sizePolicy.setHeightForWidth(pushBtn_origin->sizePolicy().hasHeightForWidth());
        pushBtn_origin->setSizePolicy(sizePolicy);
        pushBtn_origin->setMinimumSize(QSize(30, 20));
        pushBtn_origin->setMaximumSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushBtn_origin);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(AnalyzeWidgetClass);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 531, 293));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        chartFrame = new QFrame(scrollAreaWidgetContents_3);
        chartFrame->setObjectName(QStringLiteral("chartFrame"));
        chartFrame->setMinimumSize(QSize(250, 100));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        chartFrame->setPalette(palette);
        chartFrame->setAutoFillBackground(true);
        chartFrame->setFrameShape(QFrame::NoFrame);
        chartFrame->setFrameShadow(QFrame::Raised);
        chartFrame->setLineWidth(0);
        gridLayout_6 = new QGridLayout(chartFrame);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);

        gridLayout_5->addWidget(chartFrame, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(AnalyzeWidgetClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(32, 28));
        label_4->setMaximumSize(QSize(40, 28));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        label_vpp = new QLabel(AnalyzeWidgetClass);
        label_vpp->setObjectName(QStringLiteral("label_vpp"));
        label_vpp->setMinimumSize(QSize(30, 28));
        label_vpp->setMaximumSize(QSize(60, 28));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_vpp->setPalette(palette2);
        label_vpp->setFont(font);

        horizontalLayout->addWidget(label_vpp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(AnalyzeWidgetClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(72, 28));
        label_2->setMaximumSize(QSize(80, 28));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette3);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        label_sequence = new QLabel(AnalyzeWidgetClass);
        label_sequence->setObjectName(QStringLiteral("label_sequence"));
        label_sequence->setMinimumSize(QSize(20, 28));
        label_sequence->setMaximumSize(QSize(20, 28));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_sequence->setPalette(palette4);
        label_sequence->setFont(font);

        horizontalLayout->addWidget(label_sequence);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushBtn_hzoomout = new QPushButton(AnalyzeWidgetClass);
        pushBtn_hzoomout->setObjectName(QStringLiteral("pushBtn_hzoomout"));
        sizePolicy.setHeightForWidth(pushBtn_hzoomout->sizePolicy().hasHeightForWidth());
        pushBtn_hzoomout->setSizePolicy(sizePolicy);
        pushBtn_hzoomout->setMinimumSize(QSize(30, 20));
        pushBtn_hzoomout->setMaximumSize(QSize(30, 30));
        pushBtn_hzoomout->setAutoDefault(false);
        pushBtn_hzoomout->setFlat(false);

        horizontalLayout_4->addWidget(pushBtn_hzoomout);

        pushBtn_hzoomin = new QPushButton(AnalyzeWidgetClass);
        pushBtn_hzoomin->setObjectName(QStringLiteral("pushBtn_hzoomin"));
        sizePolicy.setHeightForWidth(pushBtn_hzoomin->sizePolicy().hasHeightForWidth());
        pushBtn_hzoomin->setSizePolicy(sizePolicy);
        pushBtn_hzoomin->setMinimumSize(QSize(30, 20));
        pushBtn_hzoomin->setMaximumSize(QSize(30, 30));

        horizontalLayout_4->addWidget(pushBtn_hzoomin);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_5 = new QLabel(AnalyzeWidgetClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(48, 29));
        label_5->setMaximumSize(QSize(55, 35));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_5->setPalette(palette5);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        nodeIdSpinBox = new QSpinBox(AnalyzeWidgetClass);
        nodeIdSpinBox->setObjectName(QStringLiteral("nodeIdSpinBox"));
        sizePolicy.setHeightForWidth(nodeIdSpinBox->sizePolicy().hasHeightForWidth());
        nodeIdSpinBox->setSizePolicy(sizePolicy);
        nodeIdSpinBox->setMinimumSize(QSize(54, 21));
        nodeIdSpinBox->setMaximumSize(QSize(60, 30));
        nodeIdSpinBox->setMaximum(112);

        horizontalLayout_2->addWidget(nodeIdSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_6 = new QLabel(AnalyzeWidgetClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(80, 29));
        label_6->setMaximumSize(QSize(90, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette6);
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        nodeChanSpinBox = new QSpinBox(AnalyzeWidgetClass);
        nodeChanSpinBox->setObjectName(QStringLiteral("nodeChanSpinBox"));
        sizePolicy.setHeightForWidth(nodeChanSpinBox->sizePolicy().hasHeightForWidth());
        nodeChanSpinBox->setSizePolicy(sizePolicy);
        nodeChanSpinBox->setMinimumSize(QSize(46, 21));
        nodeChanSpinBox->setMaximumSize(QSize(50, 30));
        nodeChanSpinBox->setMaximum(16);

        horizontalLayout_2->addWidget(nodeChanSpinBox);

        chartShowButton = new QPushButton(AnalyzeWidgetClass);
        chartShowButton->setObjectName(QStringLiteral("chartShowButton"));
        sizePolicy.setHeightForWidth(chartShowButton->sizePolicy().hasHeightForWidth());
        chartShowButton->setSizePolicy(sizePolicy);
        chartShowButton->setMinimumSize(QSize(80, 23));
        chartShowButton->setMaximumSize(QSize(80, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        chartShowButton->setPalette(palette7);
        chartShowButton->setFont(font);

        horizontalLayout_2->addWidget(chartShowButton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(AnalyzeWidgetClass);

        QMetaObject::connectSlotsByName(AnalyzeWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *AnalyzeWidgetClass)
    {
        AnalyzeWidgetClass->setWindowTitle(QApplication::translate("AnalyzeWidgetClass", "AnalyzeWidget", Q_NULLPTR));
        pushBtn_vzoomin->setText(QApplication::translate("AnalyzeWidgetClass", "+", Q_NULLPTR));
        pushBtn_vzoomout->setText(QApplication::translate("AnalyzeWidgetClass", "-", Q_NULLPTR));
        pushBtn_origin->setText(QApplication::translate("AnalyzeWidgetClass", "\302\244", Q_NULLPTR));
        label_4->setText(QApplication::translate("AnalyzeWidgetClass", "VPP:", Q_NULLPTR));
        label_vpp->setText(QApplication::translate("AnalyzeWidgetClass", "0.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("AnalyzeWidgetClass", "\345\272\217\345\210\227\346\240\207\347\255\276:", Q_NULLPTR));
        label_sequence->setText(QApplication::translate("AnalyzeWidgetClass", "0", Q_NULLPTR));
        pushBtn_hzoomout->setText(QApplication::translate("AnalyzeWidgetClass", "-", Q_NULLPTR));
        pushBtn_hzoomin->setText(QApplication::translate("AnalyzeWidgetClass", "+", Q_NULLPTR));
        label_5->setText(QApplication::translate("AnalyzeWidgetClass", "\350\212\202\347\202\271ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("AnalyzeWidgetClass", "\350\212\202\347\202\271\351\200\232\351\201\223\345\217\267", Q_NULLPTR));
        chartShowButton->setText(QApplication::translate("AnalyzeWidgetClass", "\346\230\276\347\244\272\346\263\242\345\275\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnalyzeWidgetClass: public Ui_AnalyzeWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZEWIDGET_H
