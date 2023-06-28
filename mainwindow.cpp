#include "mainwindow.h"
#include "tableQuery.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QSqlDatabase db_, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = db_;
    TleParce = new TleAdd;
    //    connectDb();
    localDB();
    initTable();
}

MainWindow::~MainWindow()
{
    delete ui;
    dbModel->submitAll();
}

void MainWindow::connectDb()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setPort(5432);
    db.setDatabaseName("test");
    db.setUserName("postgres");
    db.setPassword("12345678");
    if (!db.open()) {
        qDebug() << "not open";
        return;
    } else {
        qDebug() << "open";
    }
    dbQuery = new QSqlQuery(db);
    //    dbQuery->exec(createTableTle);
    dbQuery->exec(createMainTable);
}

void MainWindow::initTable()
{
    dbModel = new QSqlTableModel(this, db);
    dbModel->setTable("tle");
    dbModel->select();
    ui->tableView->setModel(dbModel);
    ui->comboBox->setCurrentText("TLE");

    //    ui->tableView->setDefaultDropAction(Qt::MoveAction);

    ui->progressBar->setVisible(false);
}

void MainWindow::localDB()
{
    //    db = QSqlDatabase::addDatabase("QSQLITE");
    //    db.setDatabaseName("./tlebase.db");

    //    if (!db.open()) {
    //        qDebug() << "not open";
    //        return;
    //    } else {
    //        qDebug() << "open";
    //    }
    dbQuery = new QSqlQuery(db);
    //    dbQuery->exec(createTableTle);
    //    dbQuery->exec(createMainTable);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();

    ui->progressBar->setVisible(false);
}

void MainWindow::on_pushButton_tle_clicked()
{
    ui->progressBar->setVisible(true);

    TleParce->openFile(ui->checkBox->isChecked());
    addTleRec();
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
}

void MainWindow::addTleRec()
{
    dbModel->setTable("tle");
    ui->comboBox->setCurrentText("TLE");
    for (int i = 0; i < TleParce->toMain().count(); i++) {
        QStringList tempList = TleParce->toMain().at(i);
        ui->progressBar->setMaximum(TleParce->toMain().count());
        ui->progressBar->setValue(i);
        dbModel->submit();
        dbModel->insertRow(dbModel->rowCount());
        for (int j = 0; j < tempList.count(); j++) {
            qDebug() << tempList.at(j);
            //            dbModel->setData(dbModel->index(i, 0), i);
            dbModel->setData(dbModel->index(i, j + 1), tempList.at(j));
        }
    }
    dbModel->select();
    dbQuery->exec(insertMain);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    qDebug() << ui->comboBox->currentText();
    dbModel->setTable(ui->comboBox->currentText());
    dbModel->select();
}


void MainWindow::on_pushButton_removeAll_clicked()
{
    dbQuery->exec(dropTable);
    dbQuery->exec(dropTableCascade);
    dbQuery->exec(createTableTle);
    dbModel->select();
}
