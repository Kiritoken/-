
/*
海量存储  最大堆
*/
#include<iostream>
#include<set>
#include<vector>
#include<functional>
using namespace std;

class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k){
		vector<int> result;
		if (input.size()<k|| k <= 0)
			return result;
		multiset<int, greater<int>> s;
		s.clear();
		for (int i = 0; i < input.size(); i++)
		{
			if (s.size() < k)
			{
				s.insert(input[i]);
			}
			else
			{
				auto ptr = s.begin();
				if (input[i] < *ptr) {
					s.erase(ptr);
					s.insert(input[i]);
				}
			}
		}
		return vector<int>(s.begin(),s.end());
	}
};


int main() {
	vector<int> v = { 4,5,1,6,2,7,3,8 };
	Solution so;
	vector<int> out = so.GetLeastNumbers_Solution(v, 3);
	for (int i = 0; i < out.size(); i++)
		cout << out[i] << endl;
}