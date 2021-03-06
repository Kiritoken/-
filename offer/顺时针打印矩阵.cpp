// 顺时针打印矩阵.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

struct Point {
	int i;
	int j;
	Point(int a, int b) :i(a), j(b) {};
};


class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		vector<int> v;
		if (matrix.size() == 0)
			return v;
		Point a(0, 0);
		Point b(0, matrix[0].size() - 1);
		Point c(matrix.size() - 1, matrix[0].size() - 1);
		Point d(matrix.size() - 1, 0);
		while (a.i<d.i&&b.i<c.i&&a.j<c.j&&d.j<b.j) {
			for (int j = a.j; j < b.j; j++)
				//v.push_back(matrix[a.i][j]);
				cout << matrix[a.i][j]<<endl;
			for (int i = b.i; i < c.i; i++)
				//v.push_back(matrix[i][b.j]);
				cout << matrix[i][b.j] << endl;
				for (int j = c.j; j > d.j; j--)
					//v.push_back(matrix[c.i][j]);
					cout << matrix[c.i][j]<<endl;
				for (int i = d.i; i > a.i; i--)
					//v.push_back(matrix[i][d.j]);
					cout << matrix[i][d.j]<<endl;
			a.i++;
			a.j++;
			b.i++;
			b.j--;
			c.i--;
			c.j--;
			d.i--;
			d.j++;
		}
		if (a.j>b.j)
			return v;
		if (a.j == c.j)
		{
			for (int i = a.i; i <= c.i; i++)
				//v.push_back(matrix[i][a.j]);
				cout << matrix[i][a.j] << endl;
			return v;
		}
		if (b.i == d.i) {
			for (int j = d.j; j <= b.j; j++)
				//v.push_back(matrix[d.i][j]);
				cout << matrix[d.i][j] << endl;
			return v;
		}
		return v;
	}
};

int main()
{
	vector<vector<int> >matrix(2);
	for (int i = 0; i < 2; i++)
		matrix[i].resize(2);
	for(int i=0;i<2;i++)
		for (int j = 0; j < 2; j++)
		{
			int n;
			cin >> n;
			matrix[i][j] = n;
		}
	Solution so;
	vector<int> v{1,2,3,4,5};
	so.printMatrix(matrix);
    return 0;
}

