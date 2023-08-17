/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QFrame *line_2;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_norad;
    QPushButton *pushButton_tle;
    QPushButton *pushButton_loadurl;
    QPushButton *pushButton_removeAll;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1041, 734);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 4);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 2, 0, 1, 4);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 3, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 4);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout_2->addWidget(progressBar, 6, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(458, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 1, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 4, 2, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 5, 0, 1, 4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_norad = new QLineEdit(centralwidget);
        lineEdit_norad->setObjectName(QStringLiteral("lineEdit_norad"));

        verticalLayout->addWidget(lineEdit_norad);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        pushButton_tle = new QPushButton(centralwidget);
        pushButton_tle->setObjectName(QStringLiteral("pushButton_tle"));
        pushButton_tle->setEnabled(true);
        pushButton_tle->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(pushButton_tle, 2, 0, 1, 1);

        pushButton_loadurl = new QPushButton(centralwidget);
        pushButton_loadurl->setObjectName(QStringLiteral("pushButton_loadurl"));

        gridLayout->addWidget(pushButton_loadurl, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 1);

        pushButton_removeAll = new QPushButton(centralwidget);
        pushButton_removeAll->setObjectName(QStringLiteral("pushButton_removeAll"));

        gridLayout_2->addWidget(pushButton_removeAll, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1041, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TLE Parcer QT", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Only geostate", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "From CelesTrak", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "From file", Q_NULLPTR));
        lineEdit_norad->setPlaceholderText(QApplication::translate("MainWindow", "NORAD number", Q_NULLPTR));
        pushButton_tle->setText(QApplication::translate("MainWindow", "Browse TLE File", Q_NULLPTR));
        pushButton_loadurl->setText(QApplication::translate("MainWindow", "Load TLE", Q_NULLPTR));
        pushButton_removeAll->setText(QApplication::translate("MainWindow", "Remove all", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
