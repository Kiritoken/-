/*
题目描述
找出n个数里最小的k个
输入描述:
每个测试输入包含空格分割的n+1个整数，最后一个整数为k值,n
不超过100。
输出描述:
输出n个整数里最小的k个数。升序输出
示例1
输入
3 9 6 8 -10 7 -11 19 30 12 23 5
输出
-11 -10 3 6 7
*/

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector <int> v;
	int n, count = 0;
	while (cin >> n) {
		v.push_back(n);
		count++;
	}
	sort(v.begin(), v.end() - 1);
	for (int i = 0; i < v[count-1]-1; i++)
		cout << v[i]<<" ";
	cout << v[v[count - 1]-1];
    return 0;
}

