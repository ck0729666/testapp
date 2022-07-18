#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size()<=1) return nums.size();
        vector<int> dp(nums.size(),1);
        int res = 0;
        for (int i=1;i<nums.size();i++) {
            for (int j=0;j<i;j++) {
                if (nums[i]>nums[j]) dp[i]=max(dp[i],dp[j]+1);
            }
            if (dp[i]>res) res = dp[i];
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> arr;
    arr.reserve(5);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(55);
    int res = s.lengthOfLIS(arr);
    cout << res << endl;
    return 0;
}