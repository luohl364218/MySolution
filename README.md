# 项目简介

VS2015+QT5开发项目的demo，让更多人避免踩坑
过去的几个月都在使用VS2015+QT5开发项目，一路走来，踩了很多坑，今天顺利完成项目的阶段性要求。为了让更多人少踩坑，特以系列博客将自己的经验记录下来，博客内容主要立足于解决除了编码之外会遇到的各种问题，如果是关于Qt中详细的语法等相关问题，本系列博客将不会提及。 更多内容见项目Wiki。

# 启动项目的步骤
1. 确定配置，如release   win32


2. Common_VS2015项目重新生成


3. AnalyzeWidget项目重新生成，然后，将GenerateFiles中的ui_AnalyzeWidget.h拷贝到MySolution中的GenerateFiles下，还有就是将生成的lib和dll拷贝到Qt环境下,见经验贴https://blog.csdn.net/lhl1124281072/article/details/80039223 第四部分 4引用插件


4. MySolution项目重新生成


5. MySolutionInstaller_Win32（如果配置的是64位就用MySolutionInstaller_x64）生成安装包

