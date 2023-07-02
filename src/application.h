#ifndef APPLICATION_H
#define APPLICATION_H
#include <memory>
#include "window/windowmanager.h"
#include "window/browsewindowmethodproxy.h"
/**
 * 初始化
 * ws client
 * ws 消息处理线程, 分发rpc请求，窗口处理的
 * biz进程：rpc调用
 * ui进程事件处理： 创建窗口、操作窗口
 *
 */
class Application
{
private:
    // 服务
    // 窗口相关的模块 需要在ui进程运行的
    std::unique_ptr<WindowManager>  windowManager;
    std::unique_ptr<BrowseWindowMethodProxy> browseWindowMethodProxy;
    // rpc相关模块
    // 工具类模块
    // 线程
public:
    Application();
    void initWsMsgHandleLoop();
    void initBizMessageLoop();
    void initUi();
    void initWsClient();
};

#endif // APPLICATION_H
