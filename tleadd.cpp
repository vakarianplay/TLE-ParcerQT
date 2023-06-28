#include "tleadd.h"

TleAdd::TleAdd(QObject *parent) : QObject(parent)
{
    qDebug() << "tle class";
}

TleAdd::~TleAdd()
{
    qDebug() << "delete class";
}

void TleAdd::openFile(bool checkGeo)
{
    geoFlag = checkGeo;
    QString filename = QFileDialog::getOpenFileName(0, "TLE", "", "*"); //open file
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QString read_string = file.readLine(); // read one line from file
        read_string.remove("\n");

        if (read_string.length() <= 24) {
            oneTle.clear();
            oneTle.append(read_string);
        }

        if (read_string.length() == 69)
            parceTLE(read_string);
    }
}

void TleAdd::readyForRec()
{
    if (geoFlag) {
        if (oneTle.at(15).toDouble() <= 14)
            vectorBase.append(oneTle);
    } else {
        vectorBase.append(oneTle);
    }
}

QVector<QStringList> TleAdd::toMain()
{
    return vectorBase;
}

void TleAdd::parceTLE(QString read_string)
{
    if (read_string.at(0) == "1") {
        oneTle.append(read_string.mid(2, 5).remove(" "));   // 2
        oneTle.append(read_string.mid(7, 1).remove(" "));   // 3
        oneTle.append(read_string.mid(9, 2).remove(" "));   // 4
        oneTle.append(read_string.mid(11, 3).remove(" "));  // 5
        oneTle.append(read_string.mid(14, 3).remove(" "));  // 6
        oneTle.append(read_string.mid(18, 2).remove(" "));  // 7
        oneTle.append(read_string.mid(20, 12).remove(" ")); // 8
        oneTle.append(read_string.mid(33, 10).remove(" ")); // 9
        oneTle.append(read_string.mid(44, 8).remove(" "));  // 10
        oneTle.append(read_string.mid(53, 8).remove(" "));  // 11
        oneTle.append(read_string.mid(62, 1).remove(" "));  // 12
        oneTle.append(read_string.mid(64, 4).remove(" "));  // 13
        oneTle.append(read_string.mid(68, 1).remove(" "));  // 14
    }

    if (read_string.at(0) == "2") {
        oneTle.append(read_string.mid(2, 5).remove(" "));   // 2
        oneTle.append(read_string.mid(8, 8).remove(" "));   // 3
        oneTle.append(read_string.mid(17, 8).remove(" "));  // 4
        oneTle.append(read_string.mid(26, 7).remove(" "));  // 5
        oneTle.append(read_string.mid(34, 8).remove(" "));  // 6
        oneTle.append(read_string.mid(43, 8).remove(" "));  // 7
        oneTle.append(read_string.mid(52, 11).remove(" ")); // 8
        oneTle.append(read_string.mid(63, 5).remove(" "));  // 9
        oneTle.append(read_string.mid(68, 1).remove(" "));  // 10
    }
    if (oneTle.length() == 23)
        readyForRec();
}
