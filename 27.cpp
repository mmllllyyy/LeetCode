#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.empty()) {
			return 0;
		}

		int i = 0, j = 0;
		while (1) {
			while (j <= nums.size() - 1 && nums[j] != val)
				j++;
			
			i = j + 1;
			
			while (i <= nums.size() - 1 && nums[i] == val) 
				i++;

			if (i >= nums.size())
				return j;
			
			
			swap(nums[i], nums[j]);
		}
	}
};

//int main()
//{
//	vector<int> nums = { 0,1,2,2,3,0,4,2 };
//	int val = 2;
//	//cin >> val;
//	nums = {4,5}, val = 4;
//
//	
//	Solution s;
//	s.removeElement(nums, val);
//}