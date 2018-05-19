/*
题目描述
牛牛想尝试一些新的料理，每个料理需要一些不同的材料，问完成所有的料理需要准备多少种不同的材料。
输入描述:
每个输入包含 1 个测试用例。每个测试用例的第 i 行，表示完成第 i 件料理需要哪些材料，各个材料用空格隔开
输入只包含大写英文字母和空格，输入文件不超过 50 行，每一行不超过 50 个字符。
输出描述:
输出一行一个数字表示完成所有料理需要多少种不同的材料。
示例1
输入
BUTTER FLOUR
HONEY FLOUR EGG
输出
4
*/

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

int main()
{
	
	string s;
	int n = 0,count=0;
/*
	set<string> se;
	while (cin >> s)
		se.insert(s);
	cout << se.size();
	*/
	
	vector<string> vec;
	while (cin >> s) {
		vec.push_back(s);
		n++;
	}
	//cout << n;
	int *flag = new int[n];//标记是否搜索过
	for (int i = 0; i < n; i++)
		flag[i] = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (flag[i] == 0)
		{
			count++;
			flag[i] = 1;
		}
		else
			continue;
		for (int j = i - 1; j >= 0; j--)
		{

			if (vec[i] == vec[j])
				flag[j] = 1;
		}
	}
	cout << count;
	delete[]flag;
    return 0;
}

