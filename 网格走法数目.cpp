/*
有一个X*Y的网格，小团要在此网格上从左上角到右下角，只能走格点且只能向右或向下走。
请设计一个算法，计算小团有多少种走法。给定两个正整数int x,int y，请返回小团的走法数目。
输入描述:
输入包括一行，逗号隔开的两个正整数x和y，取值范围[1,10]。
输出描述:
输出包括一行，为走法的数目。
示例1
输入
复制
3 2
输出
复制
10
*/

#include "stdafx.h"
#include<iostream>
using namespace std;

int CalCount(int x, int y)
{
	if (x == 0 || y == 0)
		return 1;
	else 
		return CalCount(x - 1, y)+CalCount(x,y-1);
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << CalCount(y, x);
}

