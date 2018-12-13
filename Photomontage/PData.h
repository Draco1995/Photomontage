#pragma once
#include "DebugWindow.h"
//#include "SourceStack.h"
//#include "Photomontage.h"
extern class SourceStack;
extern class Photomontage;

class PData {
public:
	PData(DebugWindow &d);
	DebugWindow* dw;
	int data;
	SourceStack* ss;
	Photomontage* cs;
	QStringList* files;
	void f();
	void initial(QStringList* files);
	void setWindows(SourceStack& ss, Photomontage& cs);
};