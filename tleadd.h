#ifndef TLEADD_H
#define TLEADD_H
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QObject>
#include <QWidget>

class TleAdd : public QObject
{
    Q_OBJECT
public:
    TleAdd(QObject *parent = 0);
    ~TleAdd();
    void openFile(bool checkGeo);
    QVector<QStringList> toMain();

private:
    void parceTLE(QString read_string);
    void readyForRec();

    QStringList oneTle;
    QVector<QStringList> vectorBase;
    bool geoFlag;
};

#endif // TLEADD_H
