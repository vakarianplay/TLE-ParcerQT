#include "connectform.h"
#include "ui_connectform.h"

ConnectForm::ConnectForm(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::ConnectForm)
{
    ui->setupUi(this);
    ui->radioButton_sqlite->setChecked(true);
    ui->formLayoutWidget->setEnabled(false);
    ui->pushButton_open->setEnabled(false);
    ui->lineEdit_pass->setEchoMode(QLineEdit::Password);
}

ConnectForm::~ConnectForm()
{
    delete ui;
}

void ConnectForm::on_radioButton_sqlite_clicked()
{
    ui->formLayoutWidget->setEnabled(false);
    ui->horizontalLayoutWidget_2->setEnabled(true);
    ui->pushButton_open->setEnabled(false);
    ui->label_connectstatus->clear();
}

void ConnectForm::on_radioButton_postgres_clicked()
{
    ui->horizontalLayoutWidget_2->setEnabled(false);
    ui->formLayoutWidget->setEnabled(true);
    ui->pushButton_open->setEnabled(false);
    ui->label_connectstatus->clear();
}

void ConnectForm::on_pushButton_browse_clicked()
{
    QString filename = QFileDialog::getOpenFileName(0,
        "SQLite database file",
        "",
        "*.db"); //open file
    QFile file(filename);
    ui->lineEdit_path->setText(filename);
    connectLocal(filename);
}

void ConnectForm::connectLocal(QString filename)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(filename);

    if (!db.open()) {
        qDebug() << "not open";
        return;
    } else {
        qDebug() << "open";
        dbType = "QSQLITE";
        ui->pushButton_open->setEnabled(true);
    }
}

void ConnectForm::connectPostgres()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(ui->lineEdit_host->text());
    db.setPort(ui->lineEdit_port->text().toInt());
    db.setDatabaseName(ui->lineEdit_db->text());
    db.setUserName(ui->lineEdit_user->text());
    db.setPassword(ui->lineEdit_pass->text());
    if (!db.open()) {
        qDebug() << "not open";
        connectFail();
        return;
    } else {
        qDebug() << "open postgres";
        dbType = "QPSQL";
        connectSuccess();
    }
}

void ConnectForm::connectSuccess()
{
    ui->label_connectstatus->setText("Success ✔");
    ui->label_connectstatus->setStyleSheet("QLabel { color : green; }");
    ui->pushButton_open->setEnabled(true);
}

void ConnectForm::connectFail()
{
    ui->label_connectstatus->setText("Incorrect user/pass ❌");
    ui->label_connectstatus->setStyleSheet("QLabel { color : red; }");
    ui->pushButton_open->setEnabled(false);
}

void ConnectForm::on_pushButton_connect_clicked()
{
    connectPostgres();
}

void ConnectForm::on_pushButton_open_clicked()
{
    w = new MainWindow(db, dbType);
    w->show();
}
