#ifndef IWSOBSERVER_H
#define IWSOBSERVER_H
#include <qobject>
#include<QJsonDocument>
#include <QJsonObject>

class IWsObserver: public virtual QObject
{
     Q_OBJECT
public:
    IWsObserver();
    virtual bool processMessage(QJsonObject & msg) = 0;
    virtual ~IWsObserver(){}
};

#endif // IWSOBSERVER_H
