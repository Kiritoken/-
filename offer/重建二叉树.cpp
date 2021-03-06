// 重建二叉树.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class Solution {
public :
	/*递归重建二叉树 先序 中序*/
	TreeNode * reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		vector<int> left_pre, right_pre, left_in, right_in;
		if (pre.size() == 0)
			return NULL;
		TreeNode *head = new TreeNode(pre[0]);
		int p = 0;
		while (vin[p] != pre[0])
			p++;
		/*左子树的先序与中序*/
		for (int i = 0; i < p; i++)
		{
			left_in.push_back(vin[i]);
			left_pre.push_back(pre[i + 1]);
		}
		/*右子树的先序与中序*/
		for (int i = p + 1; i < vin.size(); i++)
		{
			right_in.push_back(vin[i]);
			right_pre.push_back(pre[i]);
		}
		head->left = reConstructBinaryTree(left_pre, left_in);
		head->right = reConstructBinaryTree(right_pre, right_in);
		return head;
	}

	/*先序打印二叉树*/
	void prePrintintBinaryTree(TreeNode *root) {
		if (root == NULL)
			return;
		else {
			cout << root->val << endl;
			prePrintintBinaryTree(root->left);
			prePrintintBinaryTree(root->right);
		}
	}
};

int main()
{
	vector<int> pre, vin;
	int val;
	for (int i = 0; i < 8; i++)
	{
		cin >> val;
		pre.push_back(val);
	}
	for (int j = 0; j < 8; j++)
	{
		cin >> val;
		vin.push_back(val);
	}
	Solution so;
	TreeNode *head;
	head = so.reConstructBinaryTree(pre, vin);
	so.prePrintintBinaryTree(head);
    return 0;
}

