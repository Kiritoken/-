/*
题目描述
继MIUI8推出手机分身功能之后，MIUI9计划推出一个电话号码分身的功能：首先将电话号码中的每个数字加上8取个位，然后使用对应的大写字母
代替 （"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"）， 然后随机打乱这些字母，所生成的字符串即为电话号码对应的分身。
输入描述:
第一行是一个整数T（1 ≤ T ≤ 100)表示测试样例数；接下来T行，每行给定一个分身后的电话号码的分身（长度在3到10000之间）。
输出描述:
输出T行，分别对应输入中每行字符串对应的分身前的最小电话号码（允许前导0）。
示例1
输入
4
EIGHT
ZEROTWOONE
OHWETENRTEO
OHEWTIEGTHENRTEO
输出
0
234
345
0345
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		int count[10] = { 0 };
		int str[100] = {0};
		int phone[10] = { 0 };
		//统计所有字符数
		for (int i = 0; i < s.length(); i++)
			str[s[i]]++;
		count[0] = str['Z'];
		count[2] = str['W'];
		count[4] = str['U'];
		count[6] = str['X'];
		count[1] = str['O'] - count[0] - count[2] - count[4];
		count[3] = str['R'] - count[0] - count[4];
		count[5] = str['F'] - count[4];
		count[7] = str['S'] - count[6];
		count[8] = str['G'];
		count[9] = str['I'] - count[6] - count[5] - count[8];
		for (int i = 0; i < 10; i++)
		{
			int number;
			if (count[i] != 0)
			{
				number = (i + 2) % 10;
				for (int j = 0; j < count[i]; j++)
					phone[number]++;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (phone[i] != 0)
			{
				for (int j = 0; j < phone[i]; j++)
					cout << i;
			}
		}
		cout << endl;
	}

    return 0;
}

