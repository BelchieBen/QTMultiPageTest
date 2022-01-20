#include "multipagetest.h"
#include "ui_AuthUi.h"

MultiPageTest::MultiPageTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.RegisterBtn, SIGNAL(released()), this, SLOT(onNewHereClicked()));
    connect(ui.AlreadyGotAccount, SIGNAL(released()), this, SLOT(onGotAccountClicked()));
}

void MultiPageTest::onNewHereClicked() {
    ui.stackedWidget->setCurrentIndex(1);
}

void MultiPageTest::onGotAccountClicked() {
    //ui.stackedWidget->setCurrentIndex(0);
    Ui_Form form{};
    QMainWindow::setCentralWidget(form.Auth);
}
