QT += core gui widgets webenginewidgets websockets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/application.cpp \
    src/log/logfactory.cpp \
    src/log/logger.cpp \
    src/main.cpp \
    src/rpc/iservice.cpp \
    src/rpc/iwsobserver.cpp \
    src/rpc/packet.cpp \
    src/rpc/rpcclient.cpp \
    src/rpc/rpcserver.cpp \
    src/rpc/wschannelclient.cpp \
    src/tools/electronutils.cpp \
    src/tools/globalshortcutmanager.cpp \
    src/tools/traymanager.cpp \
    src/ui/browserwindow.cpp \
    src/window/browsewindowmethodproxy.cpp \
    src/window/windowmanager.cpp

HEADERS += \
    src/application.h \
    src/log/logfactory.h \
    src/log/logger.h \
    src/rpc/iservice.h \
    src/rpc/iwsobserver.h \
    src/rpc/packet.h \
    src/rpc/rpcclient.h \
    src/rpc/rpcserver.h \
    src/rpc/wschannelclient.h \
    src/tools/electronutils.h \
    src/tools/globalshortcutmanager.h \
    src/tools/traymanager.h \
    src/ui/browserwindow.h \
    src/window/browsewindowmethodproxy.h \
    src/window/windowmanager.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
