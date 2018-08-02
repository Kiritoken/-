#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
	string ReverseSentence(string str) {
		if (str.length() == 0)
			return str;
		ReverseString(str, 0, str.length() - 1);
		int start, end;
		start = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == ' ') {
				end = i - 1;
				ReverseString(str, start, end);
				start = i + 1;
			}
		}
		end = str.length() - 1;
		ReverseString(str, start, end);
		return str;
		
	}
	void ReverseString(string& str, int start, int end) {
		while (start < end) {
			swap(&str[start], &str[end]);
			start++;
			end--;
		}
	}

	template<typename T>
	void swap(T* a, T* b) {
		T temp = *a;
		*a = *b;
		*b = temp;
	}
};

int main() {
	Solution so;
	cout << so.ReverseSentence("I am a student.");
	return 0;
}