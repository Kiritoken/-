/*
��Ŀ����
ţţ�õ���һ���ر�ͼ��˳�Ųر�ͼ��ָʾ��ţţ������һ���ر��У��ر�������һ�����أ�
����ÿ�λ���ʾ�����ַ��� s �� t�����ݹ��ϵĴ�˵��ţţ��Ҫÿ�ζ��ش� t �Ƿ��� s �������С�
ע�⣬�����в�Ҫ����ԭ�ַ������������ģ����紮 abc��
���������о��� {�մ�, a, b, c, ab, ac, bc, abc} 8 �֡�
��������:
ÿ���������һ������������ÿ�����������������г��Ȳ����� 10 �Ĳ������ո�Ŀɼ� ASCII �ַ�����
�������:
���һ�� ��Yes�� ���� ��No�� ��ʾ�����
ʾ��1
����
x.nowcoder.com
ooo
���
Yes
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int flag = 0,count=0;
	for (int i = 0; i<s2.length(); i++)
		for (int j = flag; j<s1.length(); j++)
		{
			if (s1[j] == s2[i]) {
				flag = j+1;
				count++;
				break;
			}
		}
	if (count == s2.length())
		cout << "Yes";
	else
		cout << "No";
    return 0;
}

