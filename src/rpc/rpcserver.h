#ifndef RPCSERVER_H
#define RPCSERVER_H
#include "iwsobserver.h"
#include <qobject>
class RpcServer :public  IWsObserver, public virtual QObject
{
    Q_OBJECT
public:
    RpcServer();
    bool processMessage(QJsonObject & msg) override;
};

#endif // RPCSERVER_H
