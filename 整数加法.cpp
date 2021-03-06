/*题目描述
请设计一个算法能够完成两个用字符串存储的整数进行相加操作，对非法的输入则返回error
输入描述:
输入为一行，包含两个字符串，字符串的长度在[1,100]。
输出描述:
输出为一行。合法情况输出相加结果，非法情况输出error
示例1
输入
123 123
abd 123
输出
246
Error*/
#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char *a = new char[100];
	char *b = new char[100];
	int result[101] = { -1};
	cin >> a >> b;
     
	int i, j,k, flag;
	k = 0;
	flag = 0;//进位位
	i = strlen(a)-1;
	j = strlen(b)-1;
	//cout << i << j;
	//cout << (a[0] + b[0]-96 + flag)%10;
	
	for (i, j,k; i >= 0 && j >= 0; i--, j--,k++) {
		if (a[i] > '0'&&a[i]<'9' && b[j]>'0'&&b[j] < '9')
		{
			result[k] = (a[i] + b[j] - 96 + flag) % 10;
			//	cout << result[k] << endl;
			flag = (a[i] + b[j] - 96 + flag) / 10;
		}
		else
		{
			cout << "error";
			return 0;
		}
	}
	
	while (i >= 0)
	{
		result[k] = (a[i] + flag-48) % 10;
		flag= (a[i] + flag-48) /10;
		k++;
		i--;
	}
	while (j >= 0)
	{
		result[k] = (b[j] + flag-48) % 10;
		flag = (b[j] + flag-48) / 10;
		k++;
		j--;
	}
	if (flag != 0) {
		result[k] = flag;

	}
	else
		k--;
	for (k; k >= 0; k--)
	{
			cout << result[k];
	}
	delete[]a;
	delete[]b;
    return 0;
}
