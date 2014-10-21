#ifndef SQLUTILS_H
#define SQLUTILS_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QSqlDriver>
#include "common.h"

class sqlUtils : public QObject
{
    Q_OBJECT
public:
    explicit sqlUtils(QObject *parent = 0);
    int setDbFile(QString fileName);


signals:
    void reportShipInfo(ShipInfo info);
    void reportTankInfo(TankInfo info);



public slots:
    int queryShipNumber(void);
    ShipInfo queryShipInfo(int shipId);
    TankInfo queryTankInfo(int shipId,int tankId,int sounding);

private :
    QString      dbName;
    QSqlDatabase db;

};

#endif // SQLUTILS_H
