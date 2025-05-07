#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

#include "loginpage.h"
#include "dashboardpage.h"
#include "crudpage.h"
#include "help.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QStackedWidget *stackedWidget;

    LoginPage *loginPage;
    DashboardPage *dashboardPage;
    CrudPage *crudPage;
    Help *helpPage;
};

#endif // MAINWINDOW_H
