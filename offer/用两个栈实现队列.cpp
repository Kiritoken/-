// 用两个栈实现队列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stack>
using namespace std;

class Solution
{
public:
	void push(int node) {
		while (!stack2.empty()) 
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
		stack1.push(node);
	}

	int pop() {
		while (!stack1.empty())
		{
			stack2.push(stack1.top());
			stack1.pop();
		}
		return stack2.top();
		stack2.pop();

	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

int main()
{
    return 0;
}

