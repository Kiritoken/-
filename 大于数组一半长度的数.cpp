/*
题目描述
输入n个整数，输出出现次数大于等于数组长度一半的数。
输入描述:
每个测试输入包含 n个空格分割的n个整数，n不超过100，其中有一个整数出现次数大于等于n/2。
输出描述:
输出出现次数大于等于n/2的数。
示例1
输入
3 9 3 2 5 6 7 3 2 3 3 3
输出
3
*/

#include "stdafx.h"
#include<iostream>
using namespace std;
/*
int main()
{
	int n[101] = { 0 };
	int count = 0,i;
	while (cin >> i)
	{
		n[i]++;
		count++;
	}
	for (int j = 0; j < 101; j++)
		if (n[j] >= count / 2) {
			cout << j;
			break;
		}
    return 0;
}*/

int main()
{
	int n[101], count=1;
	int num = 0, flag = 0;;
	while(cin >> n[num])
		num++;
	flag = n[0];
	for (int i = 1; i < num; i++)
	{
		if (n[i] == flag)
			count++;
		else
			count--;
		if (count == 0) {
			flag = n[i];
			count++;
		}
	}
	cout << flag;
	return 0;
}

