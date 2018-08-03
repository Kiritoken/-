#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (n == 0)
			return str;
		n = n%str.length();
		string res(str.begin() + n, str.end());
		string res1(str.begin(), str.begin() + n);
		return res + res1;

	}
	
		string StlLeftRotateString(string str, int n) {
		if (n == 0)
			return str;
		n = n%str.length();
		//reverse 第二个参数为超尾元素
		reverse(str.begin(), str.begin() + n);
	//	cout << str<<endl;
		reverse(str.begin() + n, str.end());
	//	cout << str << endl;
		reverse(str.begin(), str.end());
	//	cout << str << endl;
		return str;
	}
};

int main() {
	Solution so;
	cout << so.LeftRotateString("abc", 100);
	return 0;
}
