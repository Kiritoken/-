#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> multiply(const vector<int>& A) {
		vector<int> B;
		if (A.size() == 0)
			return B;
		B.resize(A.size());
		B[0] = 1;
		//计算下三角
		for (int i = 1; i<B.size(); i++) {
			B[i] = B[i - 1] * A[i - 1];
		}
		//计算上三角
		int temp = 1;//B[n-1]的最后一位
		for (int i = B.size() - 2; i >= 0; i--) {
			temp = temp * A[i + 1];
			B[i] = B[i] * temp;
		}
		return B;
	}
};

int main()
{
    return 0;
}

