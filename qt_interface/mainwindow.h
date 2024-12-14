#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_clicked();
    void off_clicked();
    void plus_clicked();
    void moins_clicked();
    void update_label();
    void tmp_clicked();


private:
    Ui::MainWindow *ui;
    Arduino A;
};
#endif // MAINWINDOW_H
