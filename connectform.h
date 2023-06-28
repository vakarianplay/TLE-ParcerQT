#ifndef CONNECTFORM_H
#define CONNECTFORM_H

#include "mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QSqlDatabase>
#include <QWidget>

namespace Ui {
class ConnectForm;
}

class ConnectForm : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectForm(QWidget *parent = nullptr);
    ~ConnectForm();

private slots:
    void on_radioButton_sqlite_clicked();

    void on_radioButton_postgres_clicked();

    void on_pushButton_browse_clicked();

    void on_pushButton_connect_clicked();

    void on_pushButton_open_clicked();

private:
    Ui::ConnectForm *ui;
    QSqlDatabase db;
    MainWindow *w;

    void connectLocal(QString filename);
    void connectPostgres();
};

#endif // CONNECTFORM_H
