#ifndef BUTTONDIALOG_H
#define BUTTONDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>



namespace Ui {
class ButtonDialog;
}

class ButtonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ButtonDialog(QWidget *parent = 0);
    QPushButton *clickButton;
    QPushButton *toggleButton;
    QHBoxLayout *layout;
     ~ButtonDialog();

public slots:
    void buttonClicked();
    void buttonToggled();






private:
    Ui::ButtonDialog *ui;
};

#endif // BUTTONDIALOG_H
