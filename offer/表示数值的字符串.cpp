// 表示数值的字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Solution {
public:
	bool isNumeric(char* string)
	{
		bool flag = false;
		if (string == NULL)
			return false;
		//+ - 号
		if (*string == '+' || *string == '-')
			string++;
		while (*string >= '0'&&*string <= '9')
			string++;
		if (*string != '\0') {
			//小数
			if (*string == '.') {
				string++;
				while (*string >= '0'&&*string <= '9')
					string++;
				if (*string == '\0')
					return true;
			}
			//指数
			if (*string == 'E' || *string == 'e') {
				string++;
				if (*string == '+' || *string == '-')
					string++;
				if (*string == '\0')
					return false;
				while (*string >= '0'&&*string <= '9')
					string++;
				if (*string == '\0')
					return true;
				else
					return false;
			}
			//非法输入
			else
				return false;
		}
		else
			return true;
		return flag;
	}

};

int main()
{
	char string[] = "10e-12.3";
	Solution so;
	if (so.isNumeric(string))
		cout << "true";
	else
		cout << "false";
    return 0;
}

