#include <iostream>
#include <fstream>
#include <string>
#include<vector>
using namespace std;

class WordCount
{
public:
    vector <string> content;
    int rows, length, words, sentence, zhushiline, flag, blankline;
    string a;                          //ָ�-w\-c\-s\cl\-bl\-tl
    string b;                          //�ļ�����·��

    WordCount(string a, string b);     //���г�ʼ���� 
    void Count();                      //���м��� 
    void Output(string a);             //������ 
};
WordCount::WordCount(string a, string b)
{
    words = 0, rows = 0, sentence = 0, zhushiline = 0, flag = 0, blankline = 0, length = 0;
    ifstream inFile(b, ios::in);
    if (inFile)
    {
        cout << "�ļ��򿪳ɹ���" << endl;
        string line;
        while (getline(inFile, line))
        {
            content.push_back(line);
            rows++;
            if (line.length() == 0)
            {
                blankline++;
            }
            length = length + line.length();
        }
    }
    else
    {
        cout << "�ļ������ڣ�" << endl;
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
            else if ((line[k] == '/') && ((line[k + 1] == '/') || (line[k + 1] == '*')))
            {
                flag = 1;
            }
            else if ((line[k] == '/') || (line[k] == '*') && (line[k + 1] == '/'))
            {
                flag = 0;
                zhushiline++;
            }

        }
        if (flag == 1)
        {
            zhushiline++;
        }
    }
}
void WordCount::Output(string a)
{
    if (a == "-w")                     
    {
        cout << "�ı��������ĵ�����:" << words + rows - blankline - zhushiline << endl;
    }
    else if (a == "-c")
    {
        cout << "�ı����������ַ���:" << length << endl;
    }
    else if (a == "-s")
    {
        cout << "�ı��������ľ�����:" << sentence << endl;
    }
    else if (a == "-cl")
    {
        cout << "�ı���������ע����:" << zhushiline << endl;
    }
    else if (a == "-bl")
    {
        cout << "�ı��������Ŀ���:" << blankline << endl;
    }
    else if (a == "-tl")
    {
        cout << "�ı���������������:" << rows << endl;
    }
    else
    {
        cout << "��������ȷ��ָ� " << endl;
    }
}


#pragma once
