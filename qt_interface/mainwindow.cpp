#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int ret =A.connect_arduino();
    qDebug()<<"ret ="<<ret;
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
    //le slot update_label suite à la réception du signal readyReady
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_clicked()
{
    A.write_to_arduino("1");
}
void MainWindow::off_clicked()
{
    A.write_to_arduino("0");
}
void MainWindow::plus_clicked()
{
    A.write_to_arduino("2");
}
void MainWindow::moins_clicked()
{
    A.write_to_arduino("3");
}
void MainWindow::tmp_clicked()
{
    A.write_to_arduino("4");
}

void MainWindow::update_label()
{
    static QByteArray buffer; // Temporary buffer to store incomplete data
    buffer.append(A.read_from_arduino()); // Append new data to the buffer

    // Process complete lines (newline-delimited)
    while (buffer.contains('\n')) {
        QByteArray line = buffer.left(buffer.indexOf('\n')).trimmed(); // Extract a full line
        buffer.remove(0, buffer.indexOf('\n') + 1); // Remove the processed line

        if (line == "0") {
            ui->etat_led13->setText("ON");
        } else if (line == "1") {
            ui->etat_led13->setText("OFF");
        } else { // Assume it's the temperature data
            ui->label_tmp->setText(line + " °C");
        }
    }

}

