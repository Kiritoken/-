// 二叉搜索树的后序遍序列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		if (sequence.size() == 0)
			return false;
		if (sequence.size() == 1)
			return true;
		vector<int> left;
		vector<int> right;
		int i = 0;
		while (sequence[i]<sequence[sequence.size() - 1])
		{
			left.push_back(sequence[i]);
			i++;
		}
		while (i<sequence.size() - 1) {
			right.push_back(sequence[i]);
			if (sequence[i]<sequence[sequence.size() - 1])
				return false;
			i++;
		}
		if (right.size() != 0 && left.size() != 0)
			return VerifySquenceOfBST(left) && VerifySquenceOfBST(right);
		else if (left.size() == 0)
			return VerifySquenceOfBST(right);
		else
			return VerifySquenceOfBST(left);
	}
};

int main()
{

    return 0;
}

