#include "buttondialog.h"
#include "ui_buttondialog.h"


ButtonDialog::ButtonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ButtonDialog)
{
    ui->setupUi(this);
    clickButton = new QPushButton("Click meh!", this);
    toggleButton = new QPushButton("Toggle meh!", this);
    layout = new QHBoxLayout(this);
    layout->addWidget(clickButton);
    layout->addWidget(toggleButton);

    connect(clickButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));

    connect(toggleButton, SIGNAL(clicked()), this, SLOT(buttonToggled()));



}


void ButtonDialog::buttonClicked()
{
    QMessageBox::information(this, "Clicked!", "The button was clicked");
}

void ButtonDialog::buttonToggled()
{
    QMessageBox::information(this, "Toggled!", QString("The button is %1!").arg(toggleButton->isChecked() ? "pressed" : "released"));

}

ButtonDialog::~ButtonDialog()
{
    delete ui;
}
