#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        int len = A.size();
        vector<int> ans(len);
        int a = 0, b = len - 1, i = b;
        while (i >= 0)
        {
            int lef = A[a] * A[a], rig = A[b] * A[b];
            if (lef > rig) ans[i] = lef, a++;
            else ans[i] = rig, b--;
            i--;
        }
        return ans;
    }
};
//Âý
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        int i = 0, j = nums.size() - 1;
//        vector<int> ans;
//        while (i <= j) {
//            if (abs(nums[i]) < abs(nums[j])) {
//                ans.push_back(nums[j] * nums[j]);
//                j--;
//            }
//            else {
//                ans.push_back(nums[i] * nums[i]);
//                i++;
//            }
//        }
//        reverse(ans.begin(), ans.end());
//        return ans;
//    }
//};

//int main()
//{
//    vector <int> nums;
//    nums = { -4,-1,0,3,10 };
//    Solution s;
//    s.sortedSquares(nums);
//}