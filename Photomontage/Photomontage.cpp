#include "Photomontage.h"
#include <QFileDialog>


Photomontage::Photomontage(PData &p,QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	pData = &p;
	setWindowTitle("Composite Window");
	connect(ui.actionFile, SIGNAL(triggered()), this, SLOT(Files()));
}
void Photomontage::Files() {
	QStringList files = QFileDialog::getOpenFileNames(
		this,
		"Select one or more files to open",
		"C:/Users/MSI/Documents/Visual Studio 2015/Projects/Photomontage/family",
		"Images (*.png *.xpm *.jpg)");
	for(int i = 0;i<files.size();i++)
		this->pData->dw->print(files.at(i));
	this->pData->initial(&files);
}