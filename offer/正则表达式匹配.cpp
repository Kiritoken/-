// 正则表达式匹配.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Solution {
public:
	bool match(char* str, char* pattern)
	{
		if (str == NULL || pattern == NULL)
			return false;
		return matchcore(str, pattern);
	}


	bool matchcore(char* str, char* pattern)
	{
		if (*str == '\0'&&*pattern == '\0')
			return true;
		if (*str != '\0'&&*pattern == '\0')
			return false;
		if (*(pattern + 1) == '*') {
			if (*str == *pattern || *pattern == '.'&&*str != '\0')
				return matchcore(str, pattern + 2) || matchcore(str + 1, pattern);
			else
				return matchcore(str, pattern + 2);
		}
		if (*str == *pattern || (*pattern == '.'&&*str != '\0'))
			return matchcore(str + 1, pattern + 1);
		return false;
	}

};

int main()
{
    return 0;
}

