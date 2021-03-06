
// 调整数组顺序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> odd, even;
		for (auto i = array.begin(); i != array.end(); i++)
		{
			if (*i & 1)
				odd.push_back(*i);
			else
				even.push_back(*i);
		}
		for (int i = 0; i<odd.size(); i++)
		{
			array[i] = odd[i];
		}
		for (int i = 0; i<even.size(); i++)
		{
			array[i + odd.size()] = even[i];
		}
	}
};

int main()
{
    return 0;
}

