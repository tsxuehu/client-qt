#ifndef IWSOBSERVER_H
#define IWSOBSERVER_H

#include<QJsonDocument>
#include <QJsonObject>

class IWsObserver
{
public:
    IWsObserver();
    virtual bool processMessage(QJsonObject & msg) = 0;
    virtual ~IWsObserver(){}
};

#endif // IWSOBSERVER_H
