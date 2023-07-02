#ifndef PACKET_H
#define PACKET_H

#include<QString>
class PacketType {
public:
    static const QString RenderServiceCallRequest;
    static const QString MethodCall;
    static const QString CallResult;

};
class MessageFeild {
public:
    static const QString PacketType;
    static const QString Body;
};

#endif // PACKET_H
