#ifndef FIRMCALCULADORA_H
#define FIRMCALCULADORA_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>

namespace Ui {
class firmCalculadora;
}

class firmCalculadora : public QMainWindow
{
    Q_OBJECT

public:
    explicit firmCalculadora(QWidget *parent = 0);
    ~firmCalculadora();

    void closeEvent(QCloseEvent *ev) override;

private slots:
    void on_pushButtoCalcular_clicked();

private:
    Ui::firmCalculadora *ui;
};

#endif // FIRMCALCULADORA_H
