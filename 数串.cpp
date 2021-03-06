/*
题目描述
设有n个正整数，将他们连接成一排，组成一个最大的多位整数。
如:n=3时，3个整数13,312,343,连成的最大整数为34331213。
如:n=4时,4个整数7,13,4,246连接成的最大整数为7424613。
输入描述:
有多组测试样例，每组测试样例包含两行，第一行为一个整数N（N<=100），第二行包含N个数(每个数不超过1000，空格分开)。
输出描述:
每组数据输出一个表示最大的整数。
示例1
输入
2
12 123
4
7 13 4 246
输出
12312
7424613
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

bool compare(string x, string y)
{
	if (x + y > y + x)
		return false;
	else
		return true;
};
int main()
{
	int n;
	string temp;
	cin >> n;
	string str[100];
	for (int i = 0; i < n; i++)
		cin >> str[i];
	for(int i=0;i<n-1;i++)
		for (int j = 0; j <n-i-1; j++)
		{
			if (compare(str[j], str[j+1]))
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	for (int i = 0; i < n; i++)
		cout << str[i];
    return 0;
}



