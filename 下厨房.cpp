/*
��Ŀ����
ţţ�볢��һЩ�µ�����ÿ��������ҪһЩ��ͬ�Ĳ��ϣ���������е�������Ҫ׼�������ֲ�ͬ�Ĳ��ϡ�
��������:
ÿ��������� 1 ������������ÿ�����������ĵ� i �У���ʾ��ɵ� i ��������Ҫ��Щ���ϣ����������ÿո����
����ֻ������дӢ����ĸ�Ϳո������ļ������� 50 �У�ÿһ�в����� 50 ���ַ���
�������:
���һ��һ�����ֱ�ʾ�������������Ҫ�����ֲ�ͬ�Ĳ��ϡ�
ʾ��1
����
BUTTER FLOUR
HONEY FLOUR EGG
���
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
	int *flag = new int[n];//����Ƿ�������
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

