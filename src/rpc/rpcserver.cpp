#include "rpcserver.h"
#include "packet.h"
RpcServer::RpcServer()
{

}
bool RpcServer::processMessage(QJsonObject & msg) {
    if (msg.value(MessageFeild::PacketType)== PacketType::RenderServiceCallRequest) {

        // 寻找服务，调用服务上的方法
        return true;
    }
    return false;
}
