#include "MySolution.h"

MySolution::MySolution(QWidget *parent)
		: QMainWindow(parent)
{
	ui.setupUi(this);
	m_commonLib = new CommonLib();
	QObject::connect(ui.calcButton, SIGNAL(clicked()), this, SLOT(calcSlot()));
}

MySolution::~MySolution() {
	delete m_commonLib;
}

void MySolution::calcSlot()
{
	int firstvalue = ui.firstValue->text().toInt();//取出第一个文本转化为整数类型  
	int secondvalue = ui.secondValue->text().toInt();
	int resultvalue = m_commonLib->add(firstvalue, secondvalue);//调用静态库方法
	ui.resultValue->setText(QString::number(resultvalue));
}
