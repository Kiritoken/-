// 八皇后问题.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

void Permutation(vector<int> queen, int begin);
//存放八皇后全排列
vector<vector<int> >v;
int main()
{
	vector<int> queen(8);
	for (int i = 0; i < 8; i++)
		queen[i] = i;
	Permutation(queen, 0);
	//for (int i = 0; i < v.size(); i++)
	//	for (int j = 0; j < v[i].size(); j++)
	//		cout << v[i][j];
	cout << v.size();
    return 0;
}


void Permutation(vector<int> queen, int begin)
{
	if (begin == queen.size() - 1) {
		bool flag = true;
		for (int i = 0; i < queen.size(); i++) {
			if (flag == false)
				break;
			for (int j = i + 1; j < queen.size(); j++)
			{
				if ((queen[i] - queen[j] == i - j) || (queen[j] - queen[i] == i - j)) {
					flag = false;
					break;
				}
			}
		}
		if (flag == true)
			v.push_back(queen);
	}
	else {
		for (int i = begin; i < queen.size(); i++)
		{
			int temp = queen[begin];
			queen[begin] = queen[i];
			queen[i] = temp;
			Permutation(queen, begin + 1);
			temp = queen[begin];
			queen[begin] = queen[i];
			queen[i] = temp;
		}
	}
}
