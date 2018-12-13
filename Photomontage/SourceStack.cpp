#include "SourceStack.h"
SourceStack::SourceStack(PData &p,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle("Source Stack");
	pData = &p;
	current_file = 0;
	r = 10;
	currentType = TEST_TYPE;
	currentColor = QColor(255,0,0);
	files_opened = false;
}

SourceStack::~SourceStack()
{
}

void SourceStack::showFiles()
{
	files_opened = 1;
	for (int i = 0; i < files->size(); i++) {
		Stroke s;
		s.ori.load(files->at(i));
		s.res.load(files->at(i));
		s.stroke = QPixmap(s.res.size());
		s.stroke.fill(Qt::white);
		strokes.push_back(s);
	}
	current_file = 1;
	resize(strokes.front().ori.size());
	ui.spinBox->setMaximum(files->size());
	ui.spinBox->setMinimum(1);
	ui.spinBox->setValue(1);
}

QPixmap createPix(QPixmap pic, QPixmap stoke) {
	QPixmap p(pic);
	return p;
}

void SourceStack::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	if (files_opened)
	{
		QPainter pp(&strokes.at(current_file - 1).res);
		QPen pen;
		pen.setColor(currentColor);
		pen.setWidth(r);
		pp.setPen(pen);
		pp.drawLine(lastPoint, endPoint);


		QPainter painterStroke(&strokes.at(current_file - 1).stroke);
		pen.setColor(Qt::black);
		painterStroke.setPen(pen);
		painterStroke.drawLine(lastPoint, endPoint);

		/*
		QPen pen;
		pen.setColor(currentColor);
		pen.setWidth(r);
		QPainter painterRes(&strokes.at(current_file - 1).res);
		painterRes.setPen(pen);
		painterRes.drawLine(lastPoint, endPoint);
		QPainter painterStroke(&strokes.at(current_file - 1).stroke);
		pen.setColor(Qt::black);
		painterStroke.setPen(pen);
		painterStroke.drawLine(lastPoint, endPoint);*/
		lastPoint = endPoint;
		painter.drawPixmap(0, 0, strokes.at(current_file - 1).res);
	}
}

void SourceStack::mousePressEvent(QMouseEvent *event)
{
	pData->dw->print("press");
	if (event->button() == Qt::LeftButton) //����������       
	{
		lastPoint = event->pos();
		endPoint = lastPoint;
	}
}

void SourceStack::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons()&Qt::LeftButton) //���������µ�ͬʱ�ƶ����    
	{
		endPoint = event->pos();
		update(); //���л���    
	}
}

void SourceStack::mouseReleaseEvent(QMouseEvent *event)
{
	pData->dw->print("release");
	if (event->button() == Qt::LeftButton) //�������ͷ�    
	{
		endPoint = event->pos();
		update();
	}
}

void SourceStack::changePic()
{
	int value = ui.spinBox->value();
	current_file = value;
	pData->dw->print(QString(current_file));
	update();
}
