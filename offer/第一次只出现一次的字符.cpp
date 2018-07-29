// 第一次只出现一次的字符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		if (str.size() == 0)
			return -1;
		int hashtable[256] = { 0 };
		for (int i = 0; i<str.size(); i++)
			hashtable[str[i]]++;
		for (int i = 0; i<str.size(); i++)
		{
			if (hashtable[str[i]] == 1)
				return i;
		}
		return -1;
	}
};

int main()
{
    return 0;
}

