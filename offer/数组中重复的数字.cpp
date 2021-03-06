// 数组中重复的数字.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		if (length <= 0)
			return false;
		for (int i = 0; i<length; i++)
		{
			while (numbers[i] != i)
			{
				if (numbers[i] == numbers[numbers[i]]) {
					*duplication = numbers[i];
					return true;
				}
				int temp = numbers[i];
				numbers[i] = numbers[temp];
				numbers[temp] = temp;
			}
		}
		return false;
	}
};

int main()
{
	int numbers[] = { 2,1,3,1,4 };
	Solution so;
	int a = 0;
	int *duplication = &a;
	so.duplicate(numbers,5, duplication);
	cout << *duplication;
    return 0;
}

