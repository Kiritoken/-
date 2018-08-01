// 判断平衡二叉树.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() :left(NULL), right(NULL) {}
};
class Solution {
public:
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == NULL)
			return true;
		int ldepth = 0, rdepth = 0;
		ldepth = TreeDepth(pRoot->left);
		rdepth = TreeDepth(pRoot->right);
		if (abs(ldepth - rdepth)<2)
			return true;
		else
			return false;
	}

	int TreeDepth(TreeNode* pRoot) {
		if (pRoot == NULL)
			return 0;
		int depth = 1;
		int ldepth = 0, rdepth = 0;
		ldepth = TreeDepth(pRoot->left);
		rdepth = TreeDepth(pRoot->right);
		return depth + max(ldepth, rdepth);
	}
};


int main()
{
    return 0;
}

