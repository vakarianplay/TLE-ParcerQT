#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tleadd.h"
#include <QDateTime>
#include <QDebug>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QSqlDatabase db_, QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_tle_clicked();

    void addTleRec();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_removeAll_clicked();


private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery *dbQuery;
    QSqlTableModel *dbModel;

    TleAdd *TleParce = nullptr;

    void connectDb();
    void initTable();
    void localDB();

    int row;
    int rowJob;

    int sector = 48;
    int carrigeCount = 10;

    double prewLongitude;

    QVector<double> carrigeCenters;
};
#endif // MAINWINDOW_H
