// 斐波那契数列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Solution 
{
public:
	int Fibonacci(int n) {
		int f0 = 0, f1 = 1,i=2,f2;
		int result;
		if (n == 0 || n == 1)
			return n;
		while (i <= n)
		{
			f2 = f0 + f1;
			f0 = f1;
			f1 = f2;
			i++;
		}
		return f2;
	}

	int iterFibnacci(int n)
	{
		if (n == 0 || n == 1)
			return n;
		else
			return iterFibnacci(n - 1) + iterFibnacci(n - 2);
	}
};
int main()
{
	Solution so;
	cout<<so.iterFibnacci(36);
    return 0;
}

