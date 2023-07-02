#ifndef RPCCLIENT_H
#define RPCCLIENT_H
#include "iwsobserver.h"
#include <qobject>

class RpcClient : public  IWsObserver, public virtual QObject
{
     Q_OBJECT
public:
    RpcClient();
     bool processMessage(QJsonObject & msg) override;
};

#endif // RPCCLIENT_H
