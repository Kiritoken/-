/*
题目描述
给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
输入描述:
输入为一行，M(32位整数)、N(2 ≤ N ≤ 16)，以空格隔开。
输出描述:
为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，则对应的数字规则参考16进制（比如，10用A表示，等等）
示例1
输入
7 2
输出
111
*/
#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
using namespace std;
/*
int main()
{
	int m, n;
	stack <int> T;
	cin >> m >> n;
	if (m < 0) {
		cout << '-';
		m = abs(m);
	}
	while (m >0) {
		T.push(m%n);
		m = m / n;
	}
	while (!T.empty())
	{
		switch (T.top())
		{
		case 10:cout << 'A'; break;
		case 11:cout << 'B'; break;
		case 12:cout << 'C'; break;
		case 13:cout << 'D'; break;
		case 14:cout << 'E'; break;
		case 15:cout << 'F'; break;
		default:cout << T.top();
		}
		T.pop();
	}
    return 0;
}*/


int main() {
	int m, n;
	cin >> m >> n;
	string s = "", table = "0123456789ABCDEF";
	if (m < 0) {
		m = -m;
		cout << '-';
	}
	while (m > 0) {
		s = table[m%n] + s;
		m /= n;
	}
	cout << s << endl;
}

