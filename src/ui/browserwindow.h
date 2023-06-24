#ifndef BROWSERWINDOW_H
#define BROWSERWINDOW_H

#include <QWidget>

/**
 * @brief The BrowserWindow class
 */
class BrowserWindow : public QWidget
{
    Q_OBJECT

public:
    BrowserWindow(QWidget *parent = nullptr);
    ~BrowserWindow();
};
#endif // BROWSERWINDOW_H
