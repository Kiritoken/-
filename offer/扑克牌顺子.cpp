#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size()<5)
			return false;
		sort(numbers.begin(), numbers.end());
		int zero_count = 0;
		int gap = 0;
		for (int i = 0; i<numbers.size(); i++) {
			if (numbers[i] == 0)
				zero_count++;
		}
		for (int i = zero_count; i<numbers.size() - 1; i++)
		{
			if (numbers[i + 1] == numbers[i])
				return false;
			gap += numbers[i + 1] - numbers[i] - 1;
		}
		if (gap>zero_count)
			return false;
		else
			return true;
	}
};

int main() {

	vector<int> v{1,3,2,6,4};
	Solution so;
	so.IsContinuous(v);
	return 0;
}