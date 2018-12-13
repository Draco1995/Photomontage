#pragma once

#include <QWidget>
#include "ui_SourceStack.h"
#include "PData.h"
#include <QPainter>
#include <vector>
#include "stroke.h"
#include <QMouseEvent>

#define TEST_TYPE 0

class SourceStack : public QWidget
{
	Q_OBJECT

public:
	SourceStack(PData &p, QWidget *parent = Q_NULLPTR);


	~SourceStack();

	QPixmap pix;
	QPoint lastPoint;
	QPoint endPoint;
	std::vector<Stroke> strokes;
	int r;
	int current_file;
	bool files_opened;
	PData* pData;
	QStringList* files;
	void showFiles();
	int currentType;
	QColor currentColor;
	private slots:
	void changePic();

protected:
	void paintEvent(QPaintEvent *);
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void mouseReleaseEvent(QMouseEvent *);

private:
	Ui::SourceStack ui;
};
