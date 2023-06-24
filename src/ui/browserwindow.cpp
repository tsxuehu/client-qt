
#include <QtWidgets>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include "browserwindow.h"

BrowserWindow::BrowserWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
    QVBoxLayout * layout = new QVBoxLayout(this);

    QWebEngineView *view = new QWebEngineView(this);
    view->load(QUrl("https://www.baidu.com/"));
    this->setStyleSheet("border: none;");
    layout->addWidget(view);
    this->setLayout(layout);

    this->resize(800,800);
}

BrowserWindow::~BrowserWindow()
{
}

