#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_multipagetest.h"

class MultiPageTest : public QMainWindow
{
    Q_OBJECT

public:
    MultiPageTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::MultiPageTestClass ui;

private slots:
    void onNewHereClicked();
    void onGotAccountClicked();
};
