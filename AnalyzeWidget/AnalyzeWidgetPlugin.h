#ifndef ANALYZEWIDGETPLUGIN_H
#define ANALYZEWIDGETPLUGIN_H

#include <QObject>
#include <QtCore/QtPlugin>
#include <QtDesigner/QDesignerCustomWidgetInterface>

#define AnalyzeWidgetPlugin_iid "org.myPlugins.AnalyzeWidgetPluginFactoryInterface"

class AnalyzeWidgetPlugin : public QObject, public QDesignerCustomWidgetInterface
{
	Q_OBJECT
	Q_INTERFACES(QDesignerCustomWidgetInterface)
	Q_PLUGIN_METADATA(IID AnalyzeWidgetPlugin_iid FILE "analyzewidgetplugin.json")

public:
	AnalyzeWidgetPlugin(QObject *parent = 0);
	//true表示部件将用来保存子部件，否则为false
	bool isContainer() const;
	bool isInitialized() const;
	//Qt Designer的插件箱中小窗口的图标
	QIcon icon() const;
	//描述了部件的属性，例如：对象名称、大小提示，以及其它标准的QWidget属性的描述。
	QString domXml() const;
	//该控件所属的组中的Qt Designer的小工具盒
	QString group() const;
	//头文件必须包含在使用该插件的应用程序的。此信息存储在UI文件中，并将由UIC创建用于包含自定义插件形式的代码合适的#includes语句。
	QString includeFile() const;
	//提供了插件的类名称
	QString name() const;
	//一个简短的说明，以帮助用户识别Qt Designer中的部件
	QString toolTip() const;
	//为Qt Designer用户设计的部件一个较长的描述
	QString whatsThis() const;
	//一个指向自定义窗口小部件的QWidget指针实例，构建了所提供的父母
	QWidget *createWidget(QWidget *parent);
	void initialize(QDesignerFormEditorInterface *core);



private:
	bool initialized;
};

#endif // ANALYZEWIDGETPLUGIN_H
