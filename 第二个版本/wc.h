#include <iostream>
#include <fstream>
#include <string>
#include<vector>
using namespace std;

class WordCount
{
public:
    vector <string> content;
    int rows, length, words, sentence;
    string a;                          //指令：-w\-c\-s
    string b;                          //文件具体路径

    WordCount(string a, string b);     //进行初始处理 
    void Count();              //进行计数 
    void Output(string a);    //输出结果 
};
WordCount::WordCount(string a, string b)
{
    words = 0, rows = 0, sentence = 0, length = 0;
    ifstream inFile(b, ios::in);
    if (inFile)
    {
        cout << "文件打开成功！" << endl;
        string line;
        while (getline(inFile, line))
        {
            content.push_back(line);
            rows++;
            length = length + line.length();
        }
    }
    else
    {
        cout << "文件不存在！" << endl;
    }
    inFile.close();
}

void WordCount::Count()
{
    string line;
    unsigned int i, k, flag = 0;
    for (i = 0; i < rows; i++)
    {
        line = content[i];
        for (k = 0; k < line.length(); k++)
        {
            if (line[k] == ' ')
            {
                words++;
            }
            else if (line[k] == '.' || line[k] == '?' || line[k] == '!')
            {
                sentence++;
            }
        }
    }
}
void WordCount::Output(string a)
{
    if (a == "-w")                             //判断需要输出的内容
    {
        cout << "文本中所含的单词数:" << words + rows << endl;
    }
    else if (a == "-c")
    {
        cout << "文本中所含的字符数:" << length << endl;
    }
    else if (a == "-s")
    {
        cout << "文本中所含的句子数:" << sentence << endl;
    }

    else
    {
        cout << "请输入正确的命令：" << endl;
    }
}
