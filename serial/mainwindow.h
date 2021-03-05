#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSerialPort *serialPort;

private slots:
    void on_OpenBt_clicked();

    void on_claseBt_clicked();

    void serialPortRead();
    void on_sendBt_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
