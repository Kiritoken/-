// 二进制中一的个数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Solution {
public:
	int  NumberOf1(int n) {
		int a = 1,num=0;
		while(a){
			if ((a&n) != 0)
				num++;
			a=a << 1;
		}
		return num;
	}
};

int main()
{
	Solution so;
	cout<<so.NumberOf1(10);
    return 0;
}

