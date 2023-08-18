#ifndef TLEADD_H
#define TLEADD_H
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QObject>
#include <QWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

class TleAdd : public QObject {
    Q_OBJECT
public:
    TleAdd(QObject* parent = 0);
    ~TleAdd();
    void openFile(bool checkGeo);
    void getRequest(quint16 noradNum);
    QVector<QStringList> toMain();

private:
    void parceTLE(QString read_string);
    void readyForRec();
    void netManager();
    void formatAnswerTLE(QString answerTLE);

    QStringList oneTle;
    QVector<QStringList> vectorBase;
    bool geoFlag;

    QNetworkAccessManager* manager;
    QNetworkRequest request;
};

#endif // TLEADD_H
