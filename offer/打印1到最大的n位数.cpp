// 打印1到最大的n位数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Solution {
public:
	void PrintNum(int n) {
		char *s = new char[n + 1];
		memset(s, '0', n);
		s[n] = '\0';
		while (Increment(s))
		{
			print0(s);
			cout << endl;
		}
		delete[] s;
	}
protected:
	bool Increment(char *s)
	{
		bool flag = true;
		for (int i = strlen(s) - 1; i >= 0; i--)
		{
			if (s[i] == '9'&&i == 0) {
				flag = false;
				return false;
			}
			else if (s[i] == '9') {
				s[i] = '0';
				continue;
			}
			else
			{
				s[i] += 1;
				break;
			}
		}
		return flag;
	}

	void print0(char *s)
	{
		bool flag = false;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] != '0')
				flag = true;
			if (flag)
				printf("%c", s[i]);
		}
	}
};



int main()
{
	Solution so;
	so.PrintNum(4);
    return 0;
}

