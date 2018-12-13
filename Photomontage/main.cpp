#include "Photomontage.h"
#include "SourceStack.h"
#include "DebugWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DebugWindow d;
	d.show();
	PData p(d);
	Photomontage w(p);
	SourceStack s(p);
	w.show();
	s.show();
	p.setWindows(s, w);
	return a.exec();
}
