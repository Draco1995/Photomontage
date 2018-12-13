#include "DebugWindow.h"

DebugWindow::DebugWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

DebugWindow::~DebugWindow()
{
}

void DebugWindow::print(QString t)
{
	txt += t+'\n';
	ui.textBrowser->setText(txt);
}

void DebugWindow::clear()
{
	txt = "";
	ui.textBrowser->setText(txt);
}
