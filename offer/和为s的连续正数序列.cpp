/*
*��ʼ��small=1��big=2;
*small��big���к�С��sum��big++;����sum��small++;
*��small���ӵ�(1+sum)/2��ֹͣ
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		vector<vector<int> > v;
		vector<int> order;
		if (sum<2)
			return v;
		for (int i = 0; i<(sum + 1) / 2; i++)
			order.push_back(i + 1);
		auto small = order.begin();
		auto big = small + 1;
		while (small != order.end() && big != order.end())
		{
			int res = (*small + *big)*(big - small + 1) / 2;
			if (res == sum) {
				v.push_back(vector<int>(small, big + 1));
				small++;
				big++;
			}
			else if (res<sum)
				big++;
			else
				small++;
		}
		return v;
	}
};


int main() {
	return 0;
}