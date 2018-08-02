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
};

int main() {
	Solution so;
	cout << so.LeftRotateString("abc", 100);
	return 0;
}