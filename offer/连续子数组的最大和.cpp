// 连续子数组的最大和.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindGreatestSumOfSubArray(vector<int> array) {
	if (array.size() == 0)
		return 0;
	vector<int> dp(array.size());
	dp[0] = array[0];
	for (int i = 1; i<array.size(); i++)
		dp[i] = max(dp[i - 1] + array[i], array[i]);
	sort(dp.begin(), dp.end());
	return dp[dp.size() - 1];
}

int main()
{
    return 0;
}

