/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget1;
    QLabel *label_33;
    QGridLayout *tablero;
    QLabel *label_32;
    QFrame *E8;
    QFrame *H7;
    QFrame *B7;
    QFrame *F1;
    QFrame *E3;
    QLabel *label_26;
    QFrame *G5;
    QLabel *label_17;
    QFrame *B5;
    QLabel *label_10;
    QFrame *B6;
    QLabel *label_8;
    QLabel *label_12;
    QFrame *F8;
    QLabel *label_31;
    QFrame *C1;
    QLabel *label_6;
    QFrame *B1;
    QFrame *E4;
    QFrame *A3;
    QLabel *label_13;
    QFrame *D8;
    QFrame *E7;
    QFrame *G3;
    QFrame *G4;
    QFrame *C8;
    QFrame *D5;
    QFrame *H3;
    QLabel *label_28;
    QFrame *D2;
    QFrame *F6;
    QFrame *E1;
    QLabel *label_18;
    QFrame *H6;
    QFrame *B4;
    QFrame *B3;
    QFrame *F2;
    QLabel *label_22;
    QLabel *label_30;
    QLabel *label_9;
    QFrame *E6;
    QFrame *E5;
    QFrame *C5;
    QFrame *G1;
    QFrame *E2;
    QFrame *G7;
    QFrame *F5;
    QLabel *label_2;
    QFrame *F4;
    QFrame *A4;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_11;
    QFrame *D4;
    QFrame *A7;
    QFrame *D7;
    QLabel *label_14;
    QFrame *B8;
    QLabel *label_27;
    QLabel *label_16;
    QFrame *G2;
    QLabel *label_19;
    QFrame *H5;
    QFrame *C2;
    QFrame *A1;
    QFrame *A6;
    QLabel *label_7;
    QLabel *label_20;
    QFrame *H1;
    QLabel *label_15;
    QFrame *H4;
    QFrame *D3;
    QLabel *label_21;
    QFrame *F3;
    QFrame *G6;
    QLabel *label_24;
    QLabel *label_4;
    QFrame *C6;
    QLabel *label;
    QFrame *D1;
    QFrame *A5;
    QLabel *label_29;
    QLabel *label_3;
    QFrame *C7;
    QFrame *F7;
    QFrame *G8;
    QLabel *label_5;
    QFrame *A2;
    QFrame *D6;
    QFrame *H2;
    QFrame *B2;
    QFrame *C3;
    QFrame *H8;
    QFrame *A8;
    QFrame *C4;
    QWidget *widget_2;
    QLabel *label_34;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1180, 690);
        MainWindow->setMinimumSize(QSize(1180, 690));
        MainWindow->setMaximumSize(QSize(1180, 690));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(9, 9, 982, 81));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 97, 1156, 544));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(300, 540));
        widget1->setMaximumSize(QSize(300, 540));
        label_33 = new QLabel(widget1);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(80, 160, 47, 13));

        horizontalLayout->addWidget(widget1);

        tablero = new QGridLayout();
        tablero->setSpacing(0);
        tablero->setObjectName(QString::fromUtf8("tablero"));
        label_32 = new QLabel(widget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(30, 60));
        label_32->setMaximumSize(QSize(30, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(10);
        label_32->setFont(font);
        label_32->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_32, 7, 9, 1, 1);

        E8 = new QFrame(widget);
        E8->setObjectName(QString::fromUtf8("E8"));
        E8->setMinimumSize(QSize(60, 60));
        E8->setMaximumSize(QSize(60, 60));
        E8->setMouseTracking(false);
        E8->setTabletTracking(false);
        E8->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        E8->setFrameShape(QFrame::StyledPanel);
        E8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E8, 1, 5, 1, 1);

        H7 = new QFrame(widget);
        H7->setObjectName(QString::fromUtf8("H7"));
        H7->setMinimumSize(QSize(60, 60));
        H7->setMaximumSize(QSize(60, 60));
        H7->setMouseTracking(false);
        H7->setTabletTracking(false);
        H7->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        H7->setFrameShape(QFrame::StyledPanel);
        H7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H7, 2, 8, 1, 1);

        B7 = new QFrame(widget);
        B7->setObjectName(QString::fromUtf8("B7"));
        B7->setMinimumSize(QSize(60, 60));
        B7->setMaximumSize(QSize(60, 60));
        B7->setMouseTracking(false);
        B7->setTabletTracking(false);
        B7->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        B7->setFrameShape(QFrame::StyledPanel);
        B7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B7, 2, 2, 1, 1);

        F1 = new QFrame(widget);
        F1->setObjectName(QString::fromUtf8("F1"));
        F1->setMinimumSize(QSize(60, 60));
        F1->setMaximumSize(QSize(60, 60));
        F1->setMouseTracking(false);
        F1->setTabletTracking(false);
        F1->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        F1->setFrameShape(QFrame::StyledPanel);
        F1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F1, 8, 6, 1, 1);

        E3 = new QFrame(widget);
        E3->setObjectName(QString::fromUtf8("E3"));
        E3->setMinimumSize(QSize(60, 60));
        E3->setMaximumSize(QSize(60, 60));
        E3->setMouseTracking(false);
        E3->setTabletTracking(false);
        E3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        E3->setFrameShape(QFrame::StyledPanel);
        E3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E3, 6, 5, 1, 1);

        label_26 = new QLabel(widget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(30, 60));
        label_26->setMaximumSize(QSize(30, 60));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_26, 8, 9, 1, 1);

        G5 = new QFrame(widget);
        G5->setObjectName(QString::fromUtf8("G5"));
        G5->setMinimumSize(QSize(60, 60));
        G5->setMaximumSize(QSize(60, 60));
        G5->setMouseTracking(false);
        G5->setTabletTracking(false);
        G5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        G5->setFrameShape(QFrame::StyledPanel);
        G5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G5, 4, 7, 1, 1);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(60, 30));
        label_17->setMaximumSize(QSize(60, 30));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_17, 0, 3, 1, 1);

        B5 = new QFrame(widget);
        B5->setObjectName(QString::fromUtf8("B5"));
        B5->setMinimumSize(QSize(60, 60));
        B5->setMaximumSize(QSize(60, 60));
        B5->setMouseTracking(false);
        B5->setTabletTracking(false);
        B5->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        B5->setFrameShape(QFrame::StyledPanel);
        B5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B5, 4, 2, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(60, 30));
        label_10->setMaximumSize(QSize(60, 30));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_10, 9, 7, 1, 1);

        B6 = new QFrame(widget);
        B6->setObjectName(QString::fromUtf8("B6"));
        B6->setMinimumSize(QSize(60, 60));
        B6->setMaximumSize(QSize(60, 60));
        B6->setMouseTracking(false);
        B6->setTabletTracking(false);
        B6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        B6->setFrameShape(QFrame::StyledPanel);
        B6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B6, 3, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(30, 60));
        label_8->setMaximumSize(QSize(30, 60));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_8, 1, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(60, 30));
        label_12->setMaximumSize(QSize(60, 30));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_12, 9, 2, 1, 1);

        F8 = new QFrame(widget);
        F8->setObjectName(QString::fromUtf8("F8"));
        F8->setMinimumSize(QSize(60, 60));
        F8->setMaximumSize(QSize(60, 60));
        F8->setMouseTracking(false);
        F8->setTabletTracking(false);
        F8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        F8->setFrameShape(QFrame::StyledPanel);
        F8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F8, 1, 6, 1, 1);

        label_31 = new QLabel(widget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(30, 60));
        label_31->setMaximumSize(QSize(30, 60));
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_31, 2, 9, 1, 1);

        C1 = new QFrame(widget);
        C1->setObjectName(QString::fromUtf8("C1"));
        C1->setMinimumSize(QSize(60, 60));
        C1->setMaximumSize(QSize(60, 60));
        C1->setMouseTracking(false);
        C1->setTabletTracking(false);
        C1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        C1->setFrameShape(QFrame::StyledPanel);
        C1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C1, 8, 3, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(30, 60));
        label_6->setMaximumSize(QSize(30, 60));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_6, 5, 0, 1, 1);

        B1 = new QFrame(widget);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setMinimumSize(QSize(60, 60));
        B1->setMaximumSize(QSize(60, 60));
        B1->setMouseTracking(false);
        B1->setTabletTracking(false);
        B1->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        B1->setFrameShape(QFrame::StyledPanel);
        B1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B1, 8, 2, 1, 1);

        E4 = new QFrame(widget);
        E4->setObjectName(QString::fromUtf8("E4"));
        E4->setMinimumSize(QSize(60, 60));
        E4->setMaximumSize(QSize(60, 60));
        E4->setMouseTracking(false);
        E4->setTabletTracking(false);
        E4->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        E4->setFrameShape(QFrame::StyledPanel);
        E4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E4, 5, 5, 1, 1);

        A3 = new QFrame(widget);
        A3->setObjectName(QString::fromUtf8("A3"));
        A3->setMinimumSize(QSize(60, 60));
        A3->setMaximumSize(QSize(60, 60));
        A3->setMouseTracking(false);
        A3->setTabletTracking(false);
        A3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        A3->setFrameShape(QFrame::StyledPanel);
        A3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A3, 6, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(60, 30));
        label_13->setMaximumSize(QSize(60, 30));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_13, 9, 4, 1, 1);

        D8 = new QFrame(widget);
        D8->setObjectName(QString::fromUtf8("D8"));
        D8->setMinimumSize(QSize(60, 60));
        D8->setMaximumSize(QSize(60, 60));
        D8->setMouseTracking(false);
        D8->setTabletTracking(false);
        D8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        D8->setFrameShape(QFrame::StyledPanel);
        D8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D8, 1, 4, 1, 1);

        E7 = new QFrame(widget);
        E7->setObjectName(QString::fromUtf8("E7"));
        E7->setMinimumSize(QSize(60, 60));
        E7->setMaximumSize(QSize(60, 60));
        E7->setMouseTracking(false);
        E7->setTabletTracking(false);
        E7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        E7->setFrameShape(QFrame::StyledPanel);
        E7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E7, 2, 5, 1, 1);

        G3 = new QFrame(widget);
        G3->setObjectName(QString::fromUtf8("G3"));
        G3->setMinimumSize(QSize(60, 60));
        G3->setMaximumSize(QSize(60, 60));
        G3->setMouseTracking(false);
        G3->setTabletTracking(false);
        G3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        G3->setFrameShape(QFrame::StyledPanel);
        G3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G3, 6, 7, 1, 1);

        G4 = new QFrame(widget);
        G4->setObjectName(QString::fromUtf8("G4"));
        G4->setMinimumSize(QSize(60, 60));
        G4->setMaximumSize(QSize(60, 60));
        G4->setMouseTracking(false);
        G4->setTabletTracking(false);
        G4->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        G4->setFrameShape(QFrame::StyledPanel);
        G4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G4, 5, 7, 1, 1);

        C8 = new QFrame(widget);
        C8->setObjectName(QString::fromUtf8("C8"));
        C8->setMinimumSize(QSize(60, 60));
        C8->setMaximumSize(QSize(60, 60));
        C8->setMouseTracking(false);
        C8->setTabletTracking(false);
        C8->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        C8->setFrameShape(QFrame::StyledPanel);
        C8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C8, 1, 3, 1, 1);

        D5 = new QFrame(widget);
        D5->setObjectName(QString::fromUtf8("D5"));
        D5->setMinimumSize(QSize(60, 60));
        D5->setMaximumSize(QSize(60, 60));
        D5->setMouseTracking(false);
        D5->setTabletTracking(false);
        D5->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        D5->setFrameShape(QFrame::StyledPanel);
        D5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D5, 4, 4, 1, 1);

        H3 = new QFrame(widget);
        H3->setObjectName(QString::fromUtf8("H3"));
        H3->setMinimumSize(QSize(60, 60));
        H3->setMaximumSize(QSize(60, 60));
        H3->setMouseTracking(false);
        H3->setTabletTracking(false);
        H3->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        H3->setFrameShape(QFrame::StyledPanel);
        H3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H3, 6, 8, 1, 1);

        label_28 = new QLabel(widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(30, 60));
        label_28->setMaximumSize(QSize(30, 60));
        label_28->setFont(font);
        label_28->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_28, 1, 9, 1, 1);

        D2 = new QFrame(widget);
        D2->setObjectName(QString::fromUtf8("D2"));
        D2->setMinimumSize(QSize(60, 60));
        D2->setMaximumSize(QSize(60, 60));
        D2->setMouseTracking(false);
        D2->setTabletTracking(false);
        D2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        D2->setFrameShape(QFrame::StyledPanel);
        D2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D2, 7, 4, 1, 1);

        F6 = new QFrame(widget);
        F6->setObjectName(QString::fromUtf8("F6"));
        F6->setMinimumSize(QSize(60, 60));
        F6->setMaximumSize(QSize(60, 60));
        F6->setMouseTracking(false);
        F6->setTabletTracking(false);
        F6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        F6->setFrameShape(QFrame::StyledPanel);
        F6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F6, 3, 6, 1, 1);

        E1 = new QFrame(widget);
        E1->setObjectName(QString::fromUtf8("E1"));
        E1->setMinimumSize(QSize(60, 60));
        E1->setMaximumSize(QSize(60, 60));
        E1->setMouseTracking(false);
        E1->setTabletTracking(false);
        E1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        E1->setFrameShape(QFrame::StyledPanel);
        E1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E1, 8, 5, 1, 1);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(60, 30));
        label_18->setMaximumSize(QSize(60, 30));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_18, 0, 4, 1, 1);

        H6 = new QFrame(widget);
        H6->setObjectName(QString::fromUtf8("H6"));
        H6->setMinimumSize(QSize(60, 60));
        H6->setMaximumSize(QSize(60, 60));
        H6->setMouseTracking(false);
        H6->setTabletTracking(false);
        H6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        H6->setFrameShape(QFrame::StyledPanel);
        H6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H6, 3, 8, 1, 1);

        B4 = new QFrame(widget);
        B4->setObjectName(QString::fromUtf8("B4"));
        B4->setMinimumSize(QSize(60, 60));
        B4->setMaximumSize(QSize(60, 60));
        B4->setMouseTracking(false);
        B4->setTabletTracking(false);
        B4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        B4->setFrameShape(QFrame::StyledPanel);
        B4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B4, 5, 2, 1, 1);

        B3 = new QFrame(widget);
        B3->setObjectName(QString::fromUtf8("B3"));
        B3->setMinimumSize(QSize(60, 60));
        B3->setMaximumSize(QSize(60, 60));
        B3->setMouseTracking(false);
        B3->setTabletTracking(false);
        B3->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        B3->setFrameShape(QFrame::StyledPanel);
        B3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B3, 6, 2, 1, 1);

        F2 = new QFrame(widget);
        F2->setObjectName(QString::fromUtf8("F2"));
        F2->setMinimumSize(QSize(60, 60));
        F2->setMaximumSize(QSize(60, 60));
        F2->setMouseTracking(false);
        F2->setTabletTracking(false);
        F2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        F2->setFrameShape(QFrame::StyledPanel);
        F2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F2, 7, 6, 1, 1);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(60, 30));
        label_22->setMaximumSize(QSize(60, 30));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_22, 0, 7, 1, 1);

        label_30 = new QLabel(widget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(30, 60));
        label_30->setMaximumSize(QSize(30, 60));
        label_30->setFont(font);
        label_30->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_30, 3, 9, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(60, 30));
        label_9->setMaximumSize(QSize(60, 30));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_9, 9, 1, 1, 1);

        E6 = new QFrame(widget);
        E6->setObjectName(QString::fromUtf8("E6"));
        E6->setMinimumSize(QSize(60, 60));
        E6->setMaximumSize(QSize(60, 60));
        E6->setMouseTracking(false);
        E6->setTabletTracking(false);
        E6->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        E6->setFrameShape(QFrame::StyledPanel);
        E6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E6, 3, 5, 1, 1);

        E5 = new QFrame(widget);
        E5->setObjectName(QString::fromUtf8("E5"));
        E5->setMinimumSize(QSize(60, 60));
        E5->setMaximumSize(QSize(60, 60));
        E5->setMouseTracking(false);
        E5->setTabletTracking(false);
        E5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        E5->setFrameShape(QFrame::StyledPanel);
        E5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E5, 4, 5, 1, 1);

        C5 = new QFrame(widget);
        C5->setObjectName(QString::fromUtf8("C5"));
        C5->setMinimumSize(QSize(60, 60));
        C5->setMaximumSize(QSize(60, 60));
        C5->setMouseTracking(false);
        C5->setTabletTracking(false);
        C5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        C5->setFrameShape(QFrame::StyledPanel);
        C5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C5, 4, 3, 1, 1);

        G1 = new QFrame(widget);
        G1->setObjectName(QString::fromUtf8("G1"));
        G1->setMinimumSize(QSize(60, 60));
        G1->setMaximumSize(QSize(60, 60));
        G1->setMouseTracking(false);
        G1->setTabletTracking(false);
        G1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        G1->setFrameShape(QFrame::StyledPanel);
        G1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G1, 8, 7, 1, 1);

        E2 = new QFrame(widget);
        E2->setObjectName(QString::fromUtf8("E2"));
        E2->setMinimumSize(QSize(60, 60));
        E2->setMaximumSize(QSize(60, 60));
        E2->setMouseTracking(false);
        E2->setTabletTracking(false);
        E2->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        E2->setFrameShape(QFrame::StyledPanel);
        E2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(E2, 7, 5, 1, 1);

        G7 = new QFrame(widget);
        G7->setObjectName(QString::fromUtf8("G7"));
        G7->setMinimumSize(QSize(60, 60));
        G7->setMaximumSize(QSize(60, 60));
        G7->setMouseTracking(false);
        G7->setTabletTracking(false);
        G7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        G7->setFrameShape(QFrame::StyledPanel);
        G7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G7, 2, 7, 1, 1);

        F5 = new QFrame(widget);
        F5->setObjectName(QString::fromUtf8("F5"));
        F5->setMinimumSize(QSize(60, 60));
        F5->setMaximumSize(QSize(60, 60));
        F5->setMouseTracking(false);
        F5->setTabletTracking(false);
        F5->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        F5->setFrameShape(QFrame::StyledPanel);
        F5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F5, 4, 6, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(30, 60));
        label_2->setMaximumSize(QSize(30, 60));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_2, 3, 0, 1, 1);

        F4 = new QFrame(widget);
        F4->setObjectName(QString::fromUtf8("F4"));
        F4->setMinimumSize(QSize(60, 60));
        F4->setMaximumSize(QSize(60, 60));
        F4->setMouseTracking(false);
        F4->setTabletTracking(false);
        F4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        F4->setFrameShape(QFrame::StyledPanel);
        F4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F4, 5, 6, 1, 1);

        A4 = new QFrame(widget);
        A4->setObjectName(QString::fromUtf8("A4"));
        A4->setMinimumSize(QSize(60, 60));
        A4->setMaximumSize(QSize(60, 60));
        A4->setMouseTracking(false);
        A4->setTabletTracking(false);
        A4->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        A4->setFrameShape(QFrame::StyledPanel);
        A4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A4, 5, 1, 1, 1);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(60, 30));
        label_23->setMaximumSize(QSize(60, 30));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_23, 0, 6, 1, 1);

        label_25 = new QLabel(widget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(30, 60));
        label_25->setMaximumSize(QSize(30, 60));
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_25, 4, 9, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(60, 30));
        label_11->setMaximumSize(QSize(60, 30));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_11, 9, 6, 1, 1);

        D4 = new QFrame(widget);
        D4->setObjectName(QString::fromUtf8("D4"));
        D4->setMinimumSize(QSize(60, 60));
        D4->setMaximumSize(QSize(60, 60));
        D4->setMouseTracking(false);
        D4->setTabletTracking(false);
        D4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        D4->setFrameShape(QFrame::StyledPanel);
        D4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D4, 5, 4, 1, 1);

        A7 = new QFrame(widget);
        A7->setObjectName(QString::fromUtf8("A7"));
        A7->setMinimumSize(QSize(60, 60));
        A7->setMaximumSize(QSize(60, 60));
        A7->setMouseTracking(false);
        A7->setTabletTracking(false);
        A7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        A7->setFrameShape(QFrame::StyledPanel);
        A7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A7, 2, 1, 1, 1);

        D7 = new QFrame(widget);
        D7->setObjectName(QString::fromUtf8("D7"));
        D7->setMinimumSize(QSize(60, 60));
        D7->setMaximumSize(QSize(60, 60));
        D7->setMouseTracking(false);
        D7->setTabletTracking(false);
        D7->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        D7->setFrameShape(QFrame::StyledPanel);
        D7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D7, 2, 4, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(60, 30));
        label_14->setMaximumSize(QSize(60, 30));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_14, 9, 8, 1, 1);

        B8 = new QFrame(widget);
        B8->setObjectName(QString::fromUtf8("B8"));
        B8->setMinimumSize(QSize(60, 60));
        B8->setMaximumSize(QSize(60, 60));
        B8->setMouseTracking(false);
        B8->setTabletTracking(false);
        B8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        B8->setFrameShape(QFrame::StyledPanel);
        B8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B8, 1, 2, 1, 1);

        label_27 = new QLabel(widget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(30, 60));
        label_27->setMaximumSize(QSize(30, 60));
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_27, 5, 9, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(60, 30));
        label_16->setMaximumSize(QSize(60, 30));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_16, 9, 3, 1, 1);

        G2 = new QFrame(widget);
        G2->setObjectName(QString::fromUtf8("G2"));
        G2->setMinimumSize(QSize(60, 60));
        G2->setMaximumSize(QSize(60, 60));
        G2->setMouseTracking(false);
        G2->setTabletTracking(false);
        G2->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        G2->setFrameShape(QFrame::StyledPanel);
        G2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G2, 7, 7, 1, 1);

        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(60, 30));
        label_19->setMaximumSize(QSize(60, 30));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_19, 0, 1, 1, 1);

        H5 = new QFrame(widget);
        H5->setObjectName(QString::fromUtf8("H5"));
        H5->setMinimumSize(QSize(60, 60));
        H5->setMaximumSize(QSize(60, 60));
        H5->setMouseTracking(false);
        H5->setTabletTracking(false);
        H5->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        H5->setFrameShape(QFrame::StyledPanel);
        H5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H5, 4, 8, 1, 1);

        C2 = new QFrame(widget);
        C2->setObjectName(QString::fromUtf8("C2"));
        C2->setMinimumSize(QSize(60, 60));
        C2->setMaximumSize(QSize(60, 60));
        C2->setMouseTracking(false);
        C2->setTabletTracking(false);
        C2->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        C2->setFrameShape(QFrame::StyledPanel);
        C2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C2, 7, 3, 1, 1);

        A1 = new QFrame(widget);
        A1->setObjectName(QString::fromUtf8("A1"));
        A1->setMinimumSize(QSize(60, 60));
        A1->setMaximumSize(QSize(60, 60));
        A1->setMouseTracking(false);
        A1->setTabletTracking(false);
        A1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        A1->setFrameShape(QFrame::StyledPanel);
        A1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A1, 8, 1, 1, 1);

        A6 = new QFrame(widget);
        A6->setObjectName(QString::fromUtf8("A6"));
        A6->setMinimumSize(QSize(60, 60));
        A6->setMaximumSize(QSize(60, 60));
        A6->setMouseTracking(false);
        A6->setTabletTracking(false);
        A6->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        A6->setFrameShape(QFrame::StyledPanel);
        A6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A6, 3, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(30, 60));
        label_7->setMaximumSize(QSize(30, 60));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_7, 2, 0, 1, 1);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(60, 30));
        label_20->setMaximumSize(QSize(60, 30));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_20, 0, 8, 1, 1);

        H1 = new QFrame(widget);
        H1->setObjectName(QString::fromUtf8("H1"));
        H1->setMinimumSize(QSize(60, 60));
        H1->setMaximumSize(QSize(60, 60));
        H1->setMouseTracking(false);
        H1->setTabletTracking(false);
        H1->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        H1->setFrameShape(QFrame::StyledPanel);
        H1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H1, 8, 8, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(60, 30));
        label_15->setMaximumSize(QSize(60, 30));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_15, 9, 5, 1, 1);

        H4 = new QFrame(widget);
        H4->setObjectName(QString::fromUtf8("H4"));
        H4->setMinimumSize(QSize(60, 60));
        H4->setMaximumSize(QSize(60, 60));
        H4->setMouseTracking(false);
        H4->setTabletTracking(false);
        H4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        H4->setFrameShape(QFrame::StyledPanel);
        H4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H4, 5, 8, 1, 1);

        D3 = new QFrame(widget);
        D3->setObjectName(QString::fromUtf8("D3"));
        D3->setMinimumSize(QSize(60, 60));
        D3->setMaximumSize(QSize(60, 60));
        D3->setMouseTracking(false);
        D3->setTabletTracking(false);
        D3->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        D3->setFrameShape(QFrame::StyledPanel);
        D3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D3, 6, 4, 1, 1);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(60, 30));
        label_21->setMaximumSize(QSize(60, 30));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_21, 0, 2, 1, 1);

        F3 = new QFrame(widget);
        F3->setObjectName(QString::fromUtf8("F3"));
        F3->setMinimumSize(QSize(60, 60));
        F3->setMaximumSize(QSize(60, 60));
        F3->setMouseTracking(false);
        F3->setTabletTracking(false);
        F3->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        F3->setFrameShape(QFrame::StyledPanel);
        F3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F3, 6, 6, 1, 1);

        G6 = new QFrame(widget);
        G6->setObjectName(QString::fromUtf8("G6"));
        G6->setMinimumSize(QSize(60, 60));
        G6->setMaximumSize(QSize(60, 60));
        G6->setMouseTracking(false);
        G6->setTabletTracking(false);
        G6->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        G6->setFrameShape(QFrame::StyledPanel);
        G6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G6, 3, 7, 1, 1);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(60, 30));
        label_24->setMaximumSize(QSize(60, 30));
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_24, 0, 5, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 60));
        label_4->setMaximumSize(QSize(30, 60));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_4, 8, 0, 1, 1);

        C6 = new QFrame(widget);
        C6->setObjectName(QString::fromUtf8("C6"));
        C6->setMinimumSize(QSize(60, 60));
        C6->setMaximumSize(QSize(60, 60));
        C6->setMouseTracking(false);
        C6->setTabletTracking(false);
        C6->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        C6->setFrameShape(QFrame::StyledPanel);
        C6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C6, 3, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 60));
        label->setMaximumSize(QSize(30, 60));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label, 4, 0, 1, 1);

        D1 = new QFrame(widget);
        D1->setObjectName(QString::fromUtf8("D1"));
        D1->setMinimumSize(QSize(60, 60));
        D1->setMaximumSize(QSize(60, 60));
        D1->setMouseTracking(false);
        D1->setTabletTracking(false);
        D1->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        D1->setFrameShape(QFrame::StyledPanel);
        D1->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D1, 8, 4, 1, 1);

        A5 = new QFrame(widget);
        A5->setObjectName(QString::fromUtf8("A5"));
        A5->setMinimumSize(QSize(60, 60));
        A5->setMaximumSize(QSize(60, 60));
        A5->setMouseTracking(false);
        A5->setTabletTracking(false);
        A5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        A5->setFrameShape(QFrame::StyledPanel);
        A5->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A5, 4, 1, 1, 1);

        label_29 = new QLabel(widget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(30, 60));
        label_29->setMaximumSize(QSize(30, 60));
        label_29->setFont(font);
        label_29->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_29, 6, 9, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(30, 60));
        label_3->setMaximumSize(QSize(30, 60));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_3, 6, 0, 1, 1);

        C7 = new QFrame(widget);
        C7->setObjectName(QString::fromUtf8("C7"));
        C7->setMinimumSize(QSize(60, 60));
        C7->setMaximumSize(QSize(60, 60));
        C7->setMouseTracking(false);
        C7->setTabletTracking(false);
        C7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        C7->setFrameShape(QFrame::StyledPanel);
        C7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C7, 2, 3, 1, 1);

        F7 = new QFrame(widget);
        F7->setObjectName(QString::fromUtf8("F7"));
        F7->setMinimumSize(QSize(60, 60));
        F7->setMaximumSize(QSize(60, 60));
        F7->setMouseTracking(false);
        F7->setTabletTracking(false);
        F7->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        F7->setFrameShape(QFrame::StyledPanel);
        F7->setFrameShadow(QFrame::Raised);

        tablero->addWidget(F7, 2, 6, 1, 1);

        G8 = new QFrame(widget);
        G8->setObjectName(QString::fromUtf8("G8"));
        G8->setMinimumSize(QSize(60, 60));
        G8->setMaximumSize(QSize(60, 60));
        G8->setMouseTracking(false);
        G8->setTabletTracking(false);
        G8->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        G8->setFrameShape(QFrame::StyledPanel);
        G8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(G8, 1, 7, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(30, 60));
        label_5->setMaximumSize(QSize(30, 60));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        tablero->addWidget(label_5, 7, 0, 1, 1);

        A2 = new QFrame(widget);
        A2->setObjectName(QString::fromUtf8("A2"));
        A2->setMinimumSize(QSize(60, 60));
        A2->setMaximumSize(QSize(60, 60));
        A2->setMouseTracking(false);
        A2->setTabletTracking(false);
        A2->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        A2->setFrameShape(QFrame::StyledPanel);
        A2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A2, 7, 1, 1, 1);

        D6 = new QFrame(widget);
        D6->setObjectName(QString::fromUtf8("D6"));
        D6->setMinimumSize(QSize(60, 60));
        D6->setMaximumSize(QSize(60, 60));
        D6->setMouseTracking(false);
        D6->setTabletTracking(false);
        D6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        D6->setFrameShape(QFrame::StyledPanel);
        D6->setFrameShadow(QFrame::Raised);

        tablero->addWidget(D6, 3, 4, 1, 1);

        H2 = new QFrame(widget);
        H2->setObjectName(QString::fromUtf8("H2"));
        H2->setMinimumSize(QSize(60, 60));
        H2->setMaximumSize(QSize(60, 60));
        H2->setMouseTracking(false);
        H2->setTabletTracking(false);
        H2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        H2->setFrameShape(QFrame::StyledPanel);
        H2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H2, 7, 8, 1, 1);

        B2 = new QFrame(widget);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setMinimumSize(QSize(60, 60));
        B2->setMaximumSize(QSize(60, 60));
        B2->setMouseTracking(false);
        B2->setTabletTracking(false);
        B2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        B2->setFrameShape(QFrame::StyledPanel);
        B2->setFrameShadow(QFrame::Raised);

        tablero->addWidget(B2, 7, 2, 1, 1);

        C3 = new QFrame(widget);
        C3->setObjectName(QString::fromUtf8("C3"));
        C3->setMinimumSize(QSize(60, 60));
        C3->setMaximumSize(QSize(60, 60));
        C3->setMouseTracking(false);
        C3->setTabletTracking(false);
        C3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        C3->setFrameShape(QFrame::StyledPanel);
        C3->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C3, 6, 3, 1, 1);

        H8 = new QFrame(widget);
        H8->setObjectName(QString::fromUtf8("H8"));
        H8->setMinimumSize(QSize(60, 60));
        H8->setMaximumSize(QSize(60, 60));
        H8->setMouseTracking(false);
        H8->setTabletTracking(false);
        H8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        H8->setFrameShape(QFrame::StyledPanel);
        H8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(H8, 1, 8, 1, 1);

        A8 = new QFrame(widget);
        A8->setObjectName(QString::fromUtf8("A8"));
        A8->setMinimumSize(QSize(60, 60));
        A8->setMaximumSize(QSize(60, 60));
        A8->setMouseTracking(false);
        A8->setTabletTracking(false);
        A8->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        A8->setFrameShape(QFrame::StyledPanel);
        A8->setFrameShadow(QFrame::Raised);

        tablero->addWidget(A8, 1, 1, 1, 1);

        C4 = new QFrame(widget);
        C4->setObjectName(QString::fromUtf8("C4"));
        C4->setMinimumSize(QSize(60, 60));
        C4->setMaximumSize(QSize(60, 60));
        C4->setMouseTracking(false);
        C4->setTabletTracking(false);
        C4->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 106, 0 )"));
        C4->setFrameShape(QFrame::StyledPanel);
        C4->setFrameShadow(QFrame::Raised);

        tablero->addWidget(C4, 5, 3, 1, 1);


        horizontalLayout->addLayout(tablero);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(300, 540));
        widget_2->setMaximumSize(QSize(300, 540));
        label_34 = new QLabel(widget_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(80, 200, 47, 13));

        horizontalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1180, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
