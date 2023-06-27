#ifndef WSCHANNELCLIENT_H
#define WSCHANNELCLIENT_H

#include <QtCore/QObject>
#include <QtWebSockets/QWebSocket>

#include "iwsobserver.h"

class WsChannelClient : public QObject
{
    Q_OBJECT
public:
    explicit WsChannelClient();
    void addObserver(IWsObserver* observer);

private Q_SLOTS:
    void onConnected();
    void onTextMessageReceived(QString message);

private:
    QList<IWsObserver*> * observers;
    QWebSocket* m_webSocket;
    QUrl* m_url;
};

#endif // WSCHANNELCLIENT_H
