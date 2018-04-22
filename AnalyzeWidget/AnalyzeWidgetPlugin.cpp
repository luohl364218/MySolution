#include "analyzewidget.h"

#include <QtGUI>
#include "analyzewidgetplugin.h"


AnalyzeWidgetPlugin::AnalyzeWidgetPlugin(QObject *parent)
	: QObject(parent)
{
	initialized = false;
}

void AnalyzeWidgetPlugin::initialize(QDesignerFormEditorInterface *)
{
	if (initialized)
		return;

	initialized = true;
}

bool AnalyzeWidgetPlugin::isInitialized() const
{
	return initialized;
}

QWidget *AnalyzeWidgetPlugin::createWidget(QWidget *parent)
{
	return new AnalyzeWidget(parent);
}

QString AnalyzeWidgetPlugin::name() const
{
	return "AnalyzeWidget";
}

QString AnalyzeWidgetPlugin::group() const
{
	return "My Plugins";
}

QIcon AnalyzeWidgetPlugin::icon() const
{
	return QIcon();
}

QString AnalyzeWidgetPlugin::toolTip() const
{
	return QString();
}

QString AnalyzeWidgetPlugin::whatsThis() const
{
	return QString();
}

bool AnalyzeWidgetPlugin::isContainer() const
{
	return false;
}

QString AnalyzeWidgetPlugin::domXml() const
{
	return "<widget class=\"AnalyzeWidget\" name=\"analyzeWidget\">\n"
		" <property name=\"geometry\">\n"
		"  <rect>\n"
		"   <x>0</x>\n"
		"   <y>0</y>\n"
		"   <width>100</width>\n"
		"   <height>100</height>\n"
		"  </rect>\n"
		" </property>\n"
		"</widget>\n";
}

QString AnalyzeWidgetPlugin::includeFile() const
{
	return "analyzewidget.h";
}
