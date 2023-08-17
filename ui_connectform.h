/********************************************************************************
** Form generated from reading UI file 'connectform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTFORM_H
#define UI_CONNECTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_sqlite;
    QRadioButton *radioButton_postgres;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_path;
    QPushButton *pushButton_browse;
    QFrame *line;
    QFrame *line_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_host;
    QLabel *label_2;
    QLineEdit *lineEdit_port;
    QLabel *label_3;
    QLineEdit *lineEdit_db;
    QLabel *label_4;
    QLineEdit *lineEdit_user;
    QLabel *label_5;
    QLineEdit *lineEdit_pass;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_connectstatus;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_open;

    void setupUi(QWidget *ConnectForm)
    {
        if (ConnectForm->objectName().isEmpty())
            ConnectForm->setObjectName(QStringLiteral("ConnectForm"));
        ConnectForm->resize(320, 353);
        horizontalLayoutWidget = new QWidget(ConnectForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_sqlite = new QRadioButton(horizontalLayoutWidget);
        radioButton_sqlite->setObjectName(QStringLiteral("radioButton_sqlite"));

        horizontalLayout->addWidget(radioButton_sqlite);

        radioButton_postgres = new QRadioButton(horizontalLayoutWidget);
        radioButton_postgres->setObjectName(QStringLiteral("radioButton_postgres"));

        horizontalLayout->addWidget(radioButton_postgres);

        horizontalLayoutWidget_2 = new QWidget(ConnectForm);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 301, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_path = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_path->setObjectName(QStringLiteral("lineEdit_path"));

        horizontalLayout_2->addWidget(lineEdit_path);

        pushButton_browse = new QPushButton(horizontalLayoutWidget_2);
        pushButton_browse->setObjectName(QStringLiteral("pushButton_browse"));

        horizontalLayout_2->addWidget(pushButton_browse);

        line = new QFrame(ConnectForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ConnectForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 100, 301, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        formLayoutWidget = new QWidget(ConnectForm);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 120, 301, 165));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_host = new QLineEdit(formLayoutWidget);
        lineEdit_host->setObjectName(QStringLiteral("lineEdit_host"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_host);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_port = new QLineEdit(formLayoutWidget);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_port);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_db = new QLineEdit(formLayoutWidget);
        lineEdit_db->setObjectName(QStringLiteral("lineEdit_db"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_db);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_user = new QLineEdit(formLayoutWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_user);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_pass = new QLineEdit(formLayoutWidget);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_pass);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_connectstatus = new QLabel(formLayoutWidget);
        label_connectstatus->setObjectName(QStringLiteral("label_connectstatus"));

        horizontalLayout_3->addWidget(label_connectstatus);

        pushButton_connect = new QPushButton(formLayoutWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(pushButton_connect);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_3);

        pushButton_open = new QPushButton(ConnectForm);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(120, 320, 80, 21));

        retranslateUi(ConnectForm);

        QMetaObject::connectSlotsByName(ConnectForm);
    } // setupUi

    void retranslateUi(QWidget *ConnectForm)
    {
        ConnectForm->setWindowTitle(QApplication::translate("ConnectForm", "Settings", Q_NULLPTR));
        radioButton_sqlite->setText(QApplication::translate("ConnectForm", "SQLite", Q_NULLPTR));
        radioButton_postgres->setText(QApplication::translate("ConnectForm", "PostgreSQL", Q_NULLPTR));
        pushButton_browse->setText(QApplication::translate("ConnectForm", "Browse...", Q_NULLPTR));
        label->setText(QApplication::translate("ConnectForm", "Host", Q_NULLPTR));
        lineEdit_host->setText(QApplication::translate("ConnectForm", "127.0.0.1", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConnectForm", "Port", Q_NULLPTR));
        lineEdit_port->setText(QApplication::translate("ConnectForm", "5432", Q_NULLPTR));
        label_3->setText(QApplication::translate("ConnectForm", "DB Name", Q_NULLPTR));
        lineEdit_db->setText(QApplication::translate("ConnectForm", "test", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConnectForm", "User", Q_NULLPTR));
        label_5->setText(QApplication::translate("ConnectForm", "Password", Q_NULLPTR));
        label_connectstatus->setText(QString());
        pushButton_connect->setText(QApplication::translate("ConnectForm", "Connect", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("ConnectForm", "Open DB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectForm: public Ui_ConnectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTFORM_H
