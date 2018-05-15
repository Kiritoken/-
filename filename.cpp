/*
题目描述
Please create a function to extract the filename extension from the given path,return the extracted filename extension or null if none.
输入描述:
输入数据为一个文件路径
输出描述:
对于每个测试实例，要求输出对应的filename extension
示例1
输入
Abc/file.txt
输出
txt
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int flag = 0;
	int i = s.length()-1;
	//cout << i << endl;
	for (i; i >= 0; i--)
	{
		if (s[i] == '.') {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		for (i = i + 1; i < s.length(); i++)
			cout << s[i];
	}
	else
		cout << "null";
    return 0;
}

