/*
题目描述
输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入”They are students.”和”aeiou”，
则删除之后的第一个字符串变成”Thy r stdnts.”
输入描述:
每个测试输入包含2个字符串
输出描述:
输出删除后的字符串
示例1
输入
复制
They are students. aeiou
输出
复制
Thy r stdnts.
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for(int i=0;i<s2.size();i++)
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == s2[i]) {
				s1.erase(j, 1);
		//		j--;
			}
		}
	cout << s1;
    return 0;
}

