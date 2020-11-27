# Word Counter
一个命令行文本计数统计程序

Word Counter项目可以实现一个命令行文本计数统计。能正确统计导入的纯英文txt文本中的字符数，单词数，句子数。

基础功能项目具体命令行界面：

命令模式： wc.exe [参数] [文件名]

wc.exe -z english1.txt  统计字符数

wc.exe -w english1.txt 统计单词数

wc.exe -s english1.txt  统计句子数

扩展功能项目具体命令行界面：

命令模式： wc.exe [参数] [文件名]

wc.exe -z english2.txt  统计字符数

wc.exe -w english2.txt 统计单词数

wc.exe -tl english2.txt 统计总行数

wc.exe -bl english2.txt 统计空行数

wc.exe -cl english2.txt 统计注释行数


# 第一次提交的项目为：

1.WC-V0.1.cpp    此项目为空项目

# 第二次提交的项目为：

“第二个版本”文件夹

包含的文件有：
|文件|说明|
|---------|---------------|
|UnitTest1.cpp| 单元测试项目|
|WC-V0.2.cpp|源文件|
|wc.h|头文件|
|english1.txt|测试文本|
|基础功能单元测试.png|单元测试结果|
|基础功能运行结果.png|项目运行结果|


可以统计的内容如下：
|内容|命令|
|---------|---------------|
|单词数|-w|
|字符数|-c|
|句子数|-s|

在cmd中输入命令，例：WC-V0.2.exe -w D://english1.txt 

**注意：请输入文本文件完整的路径！**

项目运行结果与单元测试结果如图：

![](https://github.com/lyliuying1/Word-Count/blob/master/第二个版本/基础功能运行结果.png)
![](https://github.com/lyliuying1/Word-Count/blob/master/第二个版本/基础功能单元测试.png)

# 第三次提交的项目为：

“第三个版本”文件夹

包含的文件有：
|文件|说明|
|---------|---------------|
|UnitTest2.cpp| 单元测试项目|
|WC-V0.3.cpp|源文件|
|wc.h|头文件|
|english2.txt|测试文本|
|扩展功能单元测试.png|单元测试结果|
|扩展功能运行结果图.png|项目运行结果|


可以统计的内容如下：
|内容|命令|
|---------|---------------|
|单词数|-w|
|字符数|-c|
|句子数|-s|
|总行数|-tl|
|空行数|-bl|
|注释行数|-cl|

在cmd中输入命令，例：WC-V0.3.exe -w D://english2.txt 

![](https://github.com/lyliuying1/WordCounter/blob/master/第三个版本/扩展功能单元测试.png)
![](https://github.com/lyliuying1/WordCounter/blob/master/第三个版本/扩展功能运行结果图.png)
