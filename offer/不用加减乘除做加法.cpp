// 不用加减乘除做加法.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Solution {
	int flag = 0;//进位位
public:

	//异或获得不带进位的和 与左移一位获得进位
	int Add(int num1, int num2) {
		int sum1, sum2;
		do {
			sum1 = num1 ^ num2;
			sum2 = (num1&num2) << 1;
			num1 = sum1;
			num2 = sum2;
		} while (num2 != 0);
		return sum1;
	}

	int Add1(int num1, int num2)
	{
		int bit1, bit2;
		int n = 0;
		int sum = 0;
		while (n<(sizeof(num1) * 8)) {
			bit1 = GetBit(num1);
			bit2 = GetBit(num2);
			int res = GetSum(bit1, bit2);
			res = res << n;
			sum = sum ^ res;
			n++;
			num1 = num1 >> 1;
			num2 = num2 >> 1;
		}
		return sum;
	}

	//提取最后一位
	int GetBit(int n)
	{
		return n & 1;
	}
	//计算两位之和 进位位
	int GetSum(int bit1, int bit2)
	{
		int a1, a2;
		a1 = bit1 ^ flag;
		if (flag == 1)
		{
			if (bit1 == 0)
				flag = 0;
			else
				flag = 1;
		}
		a2 = a1 ^ bit2;
		if (bit2 == 1)
		{
			if (a1 == 0)
				;
			else
				flag = 1;
		}
		return a2;
	}
};

int main()
{
	Solution so;
	cout << so.Add(111, 899);
    return 0;
}

