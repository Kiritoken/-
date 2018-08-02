/*һ�����������������������֮�⣬���������ֶ�������ż���Ρ���д�����ҳ�������ֻ����һ�ε�����*/
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
������λ����ʵ�֣����������������������������Ľ���϶���������ֻ����һ�ε��������
?�Ľ�������Ը������Ľ��1���ڵ����λ�������ֳַ����룬ÿһ���ﶼ����ֻ����һ�ε����ݺͳɶԳ��ֵ�����
?����������ÿһ�����������Էֱ��������ֻ����һ�ε�����*/
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