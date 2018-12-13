#include "SourceStack.h"
#include "Photomontage.h"
#include <iostream>
PData::PData(DebugWindow& dw)
{
	this->dw = &dw;
	dw.print("PData Created");
	this->dw->print("Created");
}

void PData::f()
{

	return;
}

void PData::initial(QStringList * files)
{
	this->files = files;
	ss->files = files;
	ss->showFiles();
}

void PData::setWindows(SourceStack & ss, Photomontage & cs)
{
	this->cs = &cs;
	this->ss = &ss;
}
