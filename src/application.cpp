#include "application.h"
#include "window/windowmanager.h"
Application::Application()
{
	// 窗口
    this->pWindowManager = std::unique_ptr<WindowManager>(new WindowManager());
    this->pBrowseWindowMethodProxy = std::unique_ptr<BrowseWindowMethodProxy>(new BrowseWindowMethodProxy());
    this->pEventHandler = std::unique_ptr<EventHandler>(new EventHandler());
    this->pTrayManager = std::unique_ptr<TrayManager>(new TrayManager());
	// rpc
    this->pWsChannelClient = std::unique_ptr<WsChannelClient>(new WsChannelClient());
    this->pRpcServer = std::unique_ptr<RpcServer>(new RpcServer());
    this->pRpcClient = std::unique_ptr<RpcClient>(new RpcClient());
	// tool
    this->pElectronUtils = std::unique_ptr<ElectronUtils>(new ElectronUtils());
    this->pGlobalShortcutManager = std::unique_ptr<GlobalShortcutManager>(new GlobalShortcutManager());
	// 线程
    this->pWsMsgThread = std::unique_ptr<LoopThread>(new LoopThread());
    this->pBizThread = std::unique_ptr<LoopThread>(new LoopThread());
	

}
void Application::init() {
	// 分配线程
	this->pRpcServer->moveToThread(this->pWsMsgThread.get());
	this->pRpcClient->moveToThread(this->pWsMsgThread.get());

	this->pElectronUtils->moveToThread(this->pBizThread.get());
	this->pGlobalShortcutManager->moveToThread(this->pBizThread.get());
	// 绑定信号
	
	// 启动线程
	this->pWsMsgThread->start();
	this->pBizThread->start();
	// 创建ws连接
//    this->pWsChannelClient->connect("");
}

