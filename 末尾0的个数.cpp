/*
��Ŀ����
����һ��������n,��n!(���׳�)ĩβ�ж��ٸ�0�� ����: n = 10; n! = 3628800,���Դ�Ϊ2
��������:
����Ϊһ�У�n(1 �� n �� 1000)
�������:
���һ������,����Ŀ����
ʾ��1
����
10
���
2
*/

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin >> n;
	while (n) {
		count += n / 5;
		n /= 5;
	}
	cout << count;



    return 0;
}

