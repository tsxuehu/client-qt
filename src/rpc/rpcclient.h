#ifndef RPCCLIENT_H
#define RPCCLIENT_H
#include "iwsobserver.h"

class RpcClient : IWsObserver
{
public:
    RpcClient();
     bool processMessage(QJsonObject & msg) override;
};

#endif // RPCCLIENT_H
