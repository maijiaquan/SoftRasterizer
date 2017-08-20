#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include<QKeyEvent>
#include <QMouseEvent>



//#include "openglwindow.h"

#include<iostream>

using namespace std;
class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = 0);
	~mainwindow();

	void keyPressEvent(QKeyEvent *event);
	void keyReleaseEvent(QKeyEvent *event);

private:
	Ui::mainwindowClass ui;
};

#endif // MAINWINDOW_H
