#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MySolution.h"
#include "CommonLib.h"

using namespace heylink;

class MySolution : public QMainWindow
{
		Q_OBJECT

	public:
		MySolution(QWidget *parent = Q_NULLPTR);
		~MySolution();

	private:
		CommonLib * m_commonLib;
		Ui::MySolutionClass ui;

	private slots:
		//槽函数，计算两数之和
		void calcSlot();
};
