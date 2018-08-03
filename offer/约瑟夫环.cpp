#include<iostream>
#include<list>
using namespace std;


class Solution {
public:
	int LastRemaining_Solution(int n, int m)
	{
		if (n<1 || m<1)
			return -1;
		list<int> cirlist;
		for (int i = 0; i<n; i++)
			cirlist.push_back(i);
		auto cur = cirlist.begin();
		while (cirlist.size()>1) {
			for (int i = 1; i<m; i++)
			{
				cur++;
				if (cur == cirlist.end())
					cur = cirlist.begin();
			}
			list<int>::iterator next = cur;
			next++;
			if (next == cirlist.end())
				next = cirlist.begin();
			cirlist.erase(cur);
			cur = next;
		}
		return *cur;
	}
};


int main() {
	return 0;
}