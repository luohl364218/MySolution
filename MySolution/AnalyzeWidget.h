#pragma once

#include <QtWidgets/QWidget>
#include "ui_AnalyzeWidget.h"

class AnalyzeWidget : public QWidget
{
	Q_OBJECT

public:
	AnalyzeWidget(QWidget *parent = Q_NULLPTR);

private:
	Ui::AnalyzeWidgetClass ui;
};
