#pragma once

#include <QWidget>
#include "ui_DebugWindow.h"
#include <string>


class DebugWindow : public QWidget
{
	Q_OBJECT
public:
	DebugWindow(QWidget *parent = Q_NULLPTR);
	~DebugWindow();
	QString txt;
	void print(QString t);
	void clear();

private:
	Ui::DebugWindow ui;
};
