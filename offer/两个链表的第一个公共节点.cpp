// 两个链表的第一个公共节点.cpp: 定义控制台应用程序的入口点。
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
	ListNode * FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		int x = 0, y = 0;
		while (p1 || p2) {
			if (p1) {
				x++;
				p1 = p1->next;
			}
			if (p2) {
				y++;
				p2 = p2->next;
			}
		}
		p1 = pHead1;
		p2 = pHead2;
		int diff = abs(x - y);
		if (x>y) {
			while (diff--)
				p1 = p1->next;
		}
		else
		{
			while (diff--)
				p2 = p2->next;
		}
		while (p1&&p2)
		{
			if (p1 == p2)
				return p1;
			p1 = p1->next;
			p2 = p2->next;
		}
		return NULL;
	}


		ListNode* FindFirstCommonNode2(ListNode *pHead1, ListNode *pHead2) {
		ListNode *p1 = pHead1;
		ListNode *p2 = pHead2;
		while (p1 != p2) {
			p1 = (p1 == NULL ? pHead2 : p1->next);
			p2 = (p2 == NULL ? pHead1 : p2->next);
		}
		return p1;
	}
};
int main()
{
    return 0;
}

