/*
题目描述
写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。

输出描述:
输出输入字符串中含有该字符的个数。
示例1
输入
ABCDEF A
输出
1
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	char c;
	getline(cin, str);
	cin >> c;
	int i=0,num = 0;
	for (i; i < str.length(); i++)
		if (str[i] == c||str[i]==toupper(c)||str[i]==tolower(c))
			num++;
	cout << num;
    return 0;
}

