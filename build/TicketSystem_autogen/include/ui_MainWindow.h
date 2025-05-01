/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *ticketTableView;
    QPushButton *createTicketButton;
    QPushButton *assignTicketButton;
    QPushButton *updateStatusButton;
    QTextEdit *commentTextEdit;
    QPushButton *submitCommentButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        ticketTableView = new QTableView(centralWidget);
        ticketTableView->setObjectName("ticketTableView");

        verticalLayout->addWidget(ticketTableView);

        createTicketButton = new QPushButton(centralWidget);
        createTicketButton->setObjectName("createTicketButton");

        verticalLayout->addWidget(createTicketButton);

        assignTicketButton = new QPushButton(centralWidget);
        assignTicketButton->setObjectName("assignTicketButton");

        verticalLayout->addWidget(assignTicketButton);

        updateStatusButton = new QPushButton(centralWidget);
        updateStatusButton->setObjectName("updateStatusButton");

        verticalLayout->addWidget(updateStatusButton);

        commentTextEdit = new QTextEdit(centralWidget);
        commentTextEdit->setObjectName("commentTextEdit");

        verticalLayout->addWidget(commentTextEdit);

        submitCommentButton = new QPushButton(centralWidget);
        submitCommentButton->setObjectName("submitCommentButton");

        verticalLayout->addWidget(submitCommentButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        createTicketButton->setText(QCoreApplication::translate("MainWindow", "Create Ticket", nullptr));
        assignTicketButton->setText(QCoreApplication::translate("MainWindow", "Assign Ticket", nullptr));
        updateStatusButton->setText(QCoreApplication::translate("MainWindow", "Update Status", nullptr));
        commentTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Add a comment...", nullptr));
        submitCommentButton->setText(QCoreApplication::translate("MainWindow", "Submit Comment", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
