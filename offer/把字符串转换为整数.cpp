// 把字符串转换为整数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Solution {
	enum Status { kValid = 0, kInvalid };
	int g_nStatus;
public:
	int StrToInt(string str) {
		g_nStatus = kInvalid;
		long long num = 0;
		bool minus = false;
		int i = 0;
		if (str.empty() || str.size() == 0)
			return num;
		if (str[i] == '+') {
			minus = false;
			i++;
		}
		else if (str[i] == '-') {
			minus = true;
			i++;
		}
		if (str[i] != '\0')
			num = StrToIntCore(str, i, minus);
		return num;
	}

	long long int StrToIntCore(string str, int index, bool minus) {
		long long int num = 0;
		int flag = minus ? -1 : 1;
		for (int i = index; str[i] != '\0'; i++)
		{
			if (str[i] >= '0' &&str[i] <= '9')
			{
				num = num * 10 + flag * (str[i] - '0');
			}
			else
			{
				g_nStatus = kInvalid;
				num = 0;
				break;
			}
			if ((minus&&num<(signed int)0x80000000) || (!minus&&num>0x7FFFFFFF))
			{
				num = 0;
				break;
			}
		}
		return num;
	}
};

int main()
{
	string s = "-2567";
	Solution so;
	cout << so.StrToInt(s);
    return 0;
}

