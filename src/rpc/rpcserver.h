#ifndef RPCSERVER_H
#define RPCSERVER_H
#include "iwsobserver.h"

class RpcServer : IWsObserver
{
public:
    RpcServer();
    bool processMessage(QJsonObject & msg) override;
};

#endif // RPCSERVER_H
