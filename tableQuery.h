#ifndef TABLEQUERY_H
#define TABLEQUERY_H
#include <QObject>

#endif // TABLEQUERY_H

QString dropTable = "DROP TABLE tle;";
QString dropTableCascade = "DROP TABLE tle CASCADE;";
QString createTableTlePostgres
    = "CREATE TABLE IF NOT EXISTS tle (id serial primary key, name varchar not null, norad1 "
      "integer not null, class varchar not null, id4 integer not null, id5 integer not null, id6 "
      "varchar not null, yearep integer not null, timeep real not null, derive9 varchar not null, "
      "derive10 varchar not null, coeffb varchar not null, ephiemeris varchar not null, Ver "
      "varchar not null, chsum1 integer not null, norad2 integer not null, incle real not null, "
      "longitude real not null, eccen varchar not null, periapsis real not null, anomaly real not "
      "null, freq real not null, turn integer not null, chsum2 integer not null);";

QString createTableTleLocal
    = "CREATE TABLE IF NOT EXISTS tle (id integer primary key autoincrement, name varchar not "
      "null, norad1 "
      "integer not null, class varchar not null, id4 integer not null, id5 integer not null, id6 "
      "varchar not null, yearep integer not null, timeep real not null, derive9 varchar not null, "
      "derive10 varchar not null, coeffb varchar not null, ephiemeris varchar not null, Ver "
      "varchar not null, chsum1 integer not null, norad2 integer not null, incle real not null, "
      "longitude real not null, eccen varchar not null, periapsis real not null, anomaly real not "
      "null, freq real not null, turn integer not null, chsum2 integer not null);";

QString createMainTable
    = "CREATE TABLE IF NOT EXISTS main (id serial primary key, name varchar not null, system_id "
      "integer, longitude real, incle real, F4 boolean, F4B boolean, F7 boolean, F11_12 boolean, "
      "F20 boolean, "
      "workmode integer, checksignal_id integer, tle_id integer, FOREIGN KEY (system_id) "
      "REFERENCES Systems (id), FOREIGN KEY (checksignal_id) REFERENCES CheckSignals (id), FOREIGN "
      "KEY (tle_id) REFERENCES TLE (id));";
QString insertMain
    = "INSERT INTO main (name, longitude, incle, tle_id) SELECT name AS name, longitude "
      "AS longitude, incle AS incle, id AS tle_id FROM tle";
