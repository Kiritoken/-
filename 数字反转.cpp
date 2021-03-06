/*/
题目描述
对于一个整数X，定义操作rev(X)为将X按数位翻转过来，并且去除掉前导0。例如:
如果 X = 123，则rev(X) = 321;
如果 X = 100，则rev(X) = 1.
现在给出整数x和y,要求rev(rev(x) + rev(y))为多少？
输入描述:
输入为一行，x、y(1 ≤ x、y ≤ 1000)，以空格隔开。
输出描述:
输出rev(rev(x) + rev(y))的值
示例1
输入
123 100
输出
223
*/
#include "stdafx.h"
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
//int rev(int n)
//{
//	stack<int> s;
//	int result=0;
//	while (n > 0) {
//		s.push(n % 10);
//		n /= 10;
//	}
//	int i = 0;
//      while(!s.empty()){
//		  result += s.top()*pow(10, i);
//		  s.pop();
//		  i++;
//	}
//	  return result;
//};

int rev(int n)
{
	int result = 0;
	while (n > 0) {
		result= result*10 + n % 10;
		n /= 10;
	}
	return result;
};
int main()
{
	int x, y;
	cin >> x >> y;
	cout << rev(rev(x) + rev(y));
    return 0;
}

