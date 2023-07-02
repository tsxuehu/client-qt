#include "ui/browserwindow.h"
#include "application.h"
#include <QApplication>
/**
 * 三个线程
 * 1. ui线程，处理ui交互时间
 * 2. ws消息处理线程，处理ws消息
 * 3. 业务线程， ui线程、ws线程将要做的事情封装成任务丢给业务线程处理
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application app;

    app.initUi();
    app.initBizMessageLoop();
    app.initWsMsgHandleLoop();
    app.initWsClient();

    return a.exec();
}
