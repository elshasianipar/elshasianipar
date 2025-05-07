#ifndef HELP_H
#define HELP_H

#include <QWidget>

namespace Ui {
class Help;
}

class Help : public QWidget
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    ~Help();

signals:
    void backToCrud();  // Sinyal untuk kembali ke halaman CrudPage

private slots:
    void on_backButton_clicked();

private:
    Ui::Help *ui;
};

#endif // HELP_H
