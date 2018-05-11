/*
题目描述
给定一个英文字符串,请写一段代码找出这个字符串中首先出现三次的那个英文字符。
输入描述:
输入数据一个字符串，包括字母,数字等。
输出描述:
输出首先出现三次的那个英文字符
示例1
输入
Have you ever gone shopping and
输出
e
*/

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
char c[200] = {0};

char count_character(string str);

int main()
{
	string s;
	getline(cin, s);
	char result = count_character(s);
	cout << result<< endl;
    return 0;
}


char count_character(string str) {
	int i = 0;
	for (i; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
				++c[str[i]];
				if (c[str[i]] == 3)
					return str[i];
			}
		}
	return -1;
}
