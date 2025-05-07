#ifndef DASHBOARDPAGE_H
#define DASHBOARDPAGE_H

#include <QWidget>

namespace Ui {
class DashboardPage;
}

class DashboardPage : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardPage(QWidget *parent = nullptr);
    ~DashboardPage();

signals:
    // Sinyal untuk memberitahukan MainWindow untuk berpindah ke halaman CRUD
    void kelolaData();

private slots:
    // Slot untuk menangani tombol "Kelola Data" yang dipencet
    void on_kelolaDataButton_clicked();

private:
    Ui::DashboardPage *ui;
};

#endif // DASHBOARDPAGE_H
