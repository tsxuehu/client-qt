#include <QJsonDocument>
#include <QJsonObject>
#include "wschannelclient.h"

WsChannelClient::WsChannelClient()
{

}
void WsChannelClient::addObserver(IWsObserver* observer) {
    this->observers->append(observer);
}

void WsChannelClient::onTextMessageReceived(QString message) {
    QJsonDocument doc = QJsonDocument::fromJson(message.toUtf8());
    QJsonObject msg = doc.object();
    foreach (const auto & observer, *this->observers) {
       bool ret = observer->processMessage(msg);
        if (ret) {
           break;
       }
    }
}
