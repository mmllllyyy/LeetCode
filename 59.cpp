#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int end = n * n;
        int num = 1;
        int i = 0, j = -1;
        while (num <= end) {
            while (j < n - 1 && !ans[i][j + 1])
                ans[i][++j] = num++;
                
            while (i < n - 1 && !ans[i + 1][j])
                ans[++i][j] = num++;
            
            while (j > 0 && !ans[i][j - 1])
                ans[i][--j] = num++;

            while (i > 0 && !ans[i - 1][j]) 
                ans[--i][j] = num++;
            
        }

        return ans;
    }
};
//int main()
//{
//    Solution s;
//    s.generateMatrix(0);
//}