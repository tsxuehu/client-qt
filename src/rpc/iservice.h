#ifndef ISERVICE_H
#define ISERVICE_H

/**
 * 支持rpc调用，将调用结果回传给rpc server
 */
class IService
{
public:
    IService();
    virtual bool processRpcCall() = 0;
    virtual ~IService(){}
};

#endif // ISERVICE_H
