// 旋转数组的最小数字.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int min, low, high,mid;
		low = 0;
		high = rotateArray.size()-1;
		while (high-low>1)
		{
			mid = (low + high) / 2;
			if (rotateArray[mid] >= rotateArray[low])
			{
				low = mid;
				continue;
			}
			else if(rotateArray[mid]<=rotateArray[high])
			{
				high = mid;
			}
		}
		min = rotateArray[high];
		return min;

	}
};

int main()
{
	Solution *so=new Solution;
	vector<int> v{ 1,0,1,1,1 };
	int result = so->minNumberInRotateArray(v);
	cout << result;
    return 0;
}

