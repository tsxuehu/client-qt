#include "rpcclient.h"
#include "packet.h"

RpcClient::RpcClient()
{

}
bool RpcClient::processMessage(QJsonObject & msg) {
    if (msg.value(MessageFeild::PacketType)== PacketType::CallResult) {

        return true;
    }
    return false;
}
