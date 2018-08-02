/*一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。请写程序找出这两个只出现一次的数字*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	void FindNumsAppearOnce1(vector<int> data, int* num1, int *num2) {
		sort(data.begin(), data.end());
		int num = 0;
		for (int i = 0; i<data.size(); i = i + 2)
		{
			if ((data[i] ^ data[i + 1]) != -0)
			{
				if (num == 0) {
					*num1 = data[i];
					i--;
					num = 1;

				}
				else {
					*num2 = data[i];
					break;
				}
			}
		}
	}

	/*
可以用位运算实现，如果将所有所有数字相异或，则最后的结果肯定是那两个只出现一次的数字异或
?的结果，所以根据异或的结果1所在的最低位，把数字分成两半，每一半里都还有只出现一次的数据和成对出现的数据
?这样继续对每一半相异或则可以分别求出两个只出现一次的数字*/
	void FindNumsAppearOnce1(vector<int> data, int* num1, int *num2) {
		int bit = 1;
		int sum = 0;
		for (int i = 0; i<data.size(); i++)
			sum = sum^data[i];
		if (sum == 0)
			return;
		while (bit&sum != 0)
			bit = bit << 1;
		vector<int> left;
		vector<int> right;
		for (int i = 0; i<data.size(); i++)
		{
			if ((data[i] & bit) == 0)
				left.push_back(data[i]);
			else
				right.push_back(data[i]);
		}
		*num1 = 0; *num2 = 0;
		for (int i = 0; i<left.size(); i++)
			*num1 = *num1^left[i];
		for (int j = 0; j<right.size(); j++)
			*num2 = *num2^right[j];
	}

};