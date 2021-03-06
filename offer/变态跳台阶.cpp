// 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Solution {
public:
	int jumpFloorII(int number) {
		int result = 1;
		int i = 2;
		if (number <= 1)
			return 1;
		while (i <= number)
		{
			result += jumpFloorII(i-1);
			i++;
		}
		return result;
	}
};

int main()
{
	Solution so;
	cout << so.jumpFloorII(10);
    return 0;
}

