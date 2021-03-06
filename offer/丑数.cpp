// 丑数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index < 7)return index;
		vector<int> res(index);
		res[0] = 1;
		int t2 = 0, t3 = 0, t5 = 0, i;
		for (i = 1; i < index; ++i)
		{
			res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));
			if (res[i] == res[t2] * 2)t2++;
			if (res[i] == res[t3] * 3)t3++;
			if (res[i] == res[t5] * 5)t5++;
		}
		return res[index - 1];
	}

	bool IsUglyNumber(int num)
	{
		while (num % 2 == 0)
			num /= 2;
		while (num % 3 == 0)
			num /= 3;
		while (num % 5 == 0)
			num /= 5;
		return num == 1 ? true : false;
	}
};

int main()
{
	Solution so;
	cout << so.GetUglyNumber_Solution(1500);
    return 0;
}

