/********************************************************************************
** Form generated from reading UI file 'Photomontage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOMONTAGE_H
#define UI_PHOTOMONTAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhotomontageClass
{
public:
    QAction *actionFile;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuStart;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PhotomontageClass)
    {
        if (PhotomontageClass->objectName().isEmpty())
            PhotomontageClass->setObjectName(QStringLiteral("PhotomontageClass"));
        PhotomontageClass->resize(600, 400);
        actionFile = new QAction(PhotomontageClass);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        centralWidget = new QWidget(PhotomontageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PhotomontageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhotomontageClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        PhotomontageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PhotomontageClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PhotomontageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PhotomontageClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PhotomontageClass->setStatusBar(statusBar);

        menuBar->addAction(menuStart->menuAction());
        menuStart->addAction(actionFile);

        retranslateUi(PhotomontageClass);

        QMetaObject::connectSlotsByName(PhotomontageClass);
    } // setupUi

    void retranslateUi(QMainWindow *PhotomontageClass)
    {
        PhotomontageClass->setWindowTitle(QApplication::translate("PhotomontageClass", "Photomontage", nullptr));
        actionFile->setText(QApplication::translate("PhotomontageClass", "File...", nullptr));
        menuStart->setTitle(QApplication::translate("PhotomontageClass", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhotomontageClass: public Ui_PhotomontageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOMONTAGE_H
