#include<iostream>
#include<vector>
using namespace std;

class Solution {
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> v;
		if (array.size() == 0)
			return v;
		int start = 0;
		int end = array.size() - 1;
		while (start<end) {
			int res = array[start] + array[end];
			if (res == sum)
			{
				v.push_back(array[start]);
				v.push_back(array[end]);
				break;
				start++;
			}
			else if (res<sum)
				start++;
			else
				end--;
		}
		return v;
	}
};

int main() {
	return 0;
}