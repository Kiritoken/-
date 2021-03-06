﻿// 链表中环的入口节点.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<map>
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

	ListNode * EntryNodeOfLoop2(ListNode* pHead) {
		map<ListNode*, int> m;
		if (pHead == NULL)
			return NULL;
		while (pHead) {
			//insert返回迭代器和是否插入的bool标志 second为false表示没有插入即map中已经存在
			if (!m.insert(pair<ListNode*, int>(pHead, 0)).second)
				return pHead;
			pHead = pHead->next;
		}
		return NULL;
	}
	ListNode * EntryNodeOfLoop(ListNode* pHead)
	{
		if (pHead == NULL)
			return NULL;
		int num = FindNodeNumInLoop(pHead);
		if (num == 0)
			return NULL;
		ListNode* p1 = pHead;
		ListNode* p2 = p1;
		while (num--) {
			p2 = p2->next;
		}
		while (p1 != p2) {
			p1 = p1->next;
			p2 = p2->next;
		}
		return p1;
	}

	int FindNodeNumInLoop(ListNode* pHead)
	{
		if (pHead == NULL)
			return 0;
		ListNode* pSlow = pHead;
		ListNode* pFast = pSlow->next;
		while (pSlow != NULL && pFast != NULL) {
			if (pSlow == pFast)
				break;
			pSlow = pSlow->next;
			pFast = pFast->next;
			if (pFast != NULL)
				pFast = pFast->next;
		}
		if (pFast == NULL)
			return 0;
		int num = 1;
		while (pSlow->next != pFast) {
			pSlow = pSlow->next;
			num++;
		}
		return num;
	}
};

int main()
{
	ListNode head(1), p1(2), p3(3), p4(4);
	head.next = &p1;
	p1.next = &p3;
	p3.next = &p4;
	p4.next = &p1;
	Solution so;
	ListNode *p;
	p = so.EntryNodeOfLoop2(&head);
	cout << p->val;
    return 0;
}

