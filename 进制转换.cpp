/*
��Ŀ����
����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������
��������:
����Ϊһ�У�M(32λ����)��N(2 �� N �� 16)���Կո������
�������:
Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����N����9�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ�
ʾ��1
����
7 2
���
111
*/
#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
using namespace std;
/*
int main()
{
	int m, n;
	stack <int> T;
	cin >> m >> n;
	if (m < 0) {
		cout << '-';
		m = abs(m);
	}
	while (m >0) {
		T.push(m%n);
		m = m / n;
	}
	while (!T.empty())
	{
		switch (T.top())
		{
		case 10:cout << 'A'; break;
		case 11:cout << 'B'; break;
		case 12:cout << 'C'; break;
		case 13:cout << 'D'; break;
		case 14:cout << 'E'; break;
		case 15:cout << 'F'; break;
		default:cout << T.top();
		}
		T.pop();
	}
    return 0;
}*/


int main() {
	int m, n;
	cin >> m >> n;
	string s = "", table = "0123456789ABCDEF";
	if (m < 0) {
		m = -m;
		cout << '-';
	}
	while (m > 0) {
		s = table[m%n] + s;
		m /= n;
	}
	cout << s << endl;
}

