/*
题目描述
输入一个正整数n,求n!(即阶乘)末尾有多少个0？ 比如: n = 10; n! = 3628800,所以答案为2
输入描述:
输入为一行，n(1 ≤ n ≤ 1000)
输出描述:
输出一个整数,即题目所求
示例1
输入
10
输出
2
*/

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin >> n;
	while (n) {
		count += n / 5;
		n /= 5;
	}
	cout << count;



    return 0;
}

