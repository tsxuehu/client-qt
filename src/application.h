#ifndef APPLICATION_H
#define APPLICATION_H
#include <memory>
#include "utils/loopthread.h"
#include "window/windowmanager.h"
#include "window/browsewindowmethodproxy.h"
#include "window/eventhandler.h"
#include "rpc/wschannelclient.h"
#include "rpc/rpcclient.h"
#include "rpc/rpcserver.h"
#include "tools/electronutils.h"
#include "tools/globalshortcutmanager.h"
#include "tools/traymanager.h"
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
	std::unique_ptr<WindowManager>  pWindowManager;
	std::unique_ptr<BrowseWindowMethodProxy> pBrowseWindowMethodProxy;
	std::unique_ptr<EventHandler> pEventHandler;
	// rpc相关模块
	std::unique_ptr< WsChannelClient> pWsChannelClient;
	std::unique_ptr< RpcServer> pRpcServer;
	std::unique_ptr< RpcClient> pRpcClient;
	// 工具类模块
	std::unique_ptr< ElectronUtils> pElectronUtils;
	std::unique_ptr< GlobalShortcutManager> pGlobalShortcutManager;
	std::unique_ptr< TrayManager> pTrayManager;
	// 线程
	std::unique_ptr< LoopThread>  pWsMsgThread;
	std::unique_ptr< LoopThread>  pBizThread;
public:
	Application();
	void init();

};

#endif // APPLICATION_H
