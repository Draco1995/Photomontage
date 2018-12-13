#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Photomontage.h"
#include "PData.h"

class Photomontage : public QMainWindow
{
	Q_OBJECT

public:
	Photomontage(PData &p,QWidget *parent = Q_NULLPTR);
	PData* pData;

	public slots:
	void Files();


private:
	Ui::PhotomontageClass ui;
};
