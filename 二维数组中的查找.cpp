/*
剑指offer
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

* 矩阵是有序的，从左下角来看，向上数字递减，向右数字递增，
* 因此从左下角开始查找，当要查找数字比左下角数字大时。右移
* 要查找数字比左下角数字小时，上移
*/

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
	bool Find(int target,vector<vector<int> > array) {
		int rows = array.size();
		int cols = array[0].size();
		for (int i = 0,j = cols - 1; i < rows&&j >= 0;) {
			if (array[i][j] == target)
				return true;
			else {
				if (array[i][j] > target)
					j--;
				else
					i++;
			}
		}
		return false;
	}

};

int main()
{
	vector<vector<int> > array(5);
	for (int i = 0; i < 5; i++)
		array[i].resize(5);
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> array[i][j];
	Solution so;
	if (so.Find(5, array))
		cout << "true" << endl;
	else
		cout << "false" << endl;


    return 0;
}

