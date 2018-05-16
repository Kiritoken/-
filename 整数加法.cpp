// 整数加法.cpp: 定义控制台应用程序的入口点。
//

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
