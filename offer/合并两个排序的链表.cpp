// 合并两个排序的链表.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	ListNode * Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL && pHead2 == NULL)
			return NULL;
		else if (pHead1 == NULL)
			return pHead2;
		else if (pHead2 == NULL)
			return pHead1;
		ListNode* pMergeHead;
		if (pHead1->val<pHead2->val)
		{
			pMergeHead = pHead1;
			pMergeHead->next = Merge(pHead1->next, pHead2);
		}
		else
		{
			pMergeHead = pHead2;
			pMergeHead->next = Merge(pHead1, pHead2->next);
		}
		return pMergeHead;
	}
};


int main()
{
    return 0;
}

