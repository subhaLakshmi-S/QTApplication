#ifndef MAINWINDOWSUBHA_H
#define MAINWINDOWSUBHA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowsubi; }
QT_END_NAMESPACE

class MainWindowsubha : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowsubha(QWidget *parent = nullptr);
    ~MainWindowsubha();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindowsubha *ui;
};
#endif // MAINWINDOWSUBHA_H
