// 二叉树镜像.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL)
			return;
		TreeNode* pTemp;
		pTemp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = pTemp;
		if (pRoot->left != NULL)
			Mirror(pRoot->left);
		if (pRoot->right != NULL)
			Mirror(pRoot->right);
	}
};

int main()
{

    return 0;
}

