class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> dp(2);

        for(int i=0;i<nums.size();i++)
        {
            vector<long long> next(2);
            next[0] = max(nums[i]+dp[1], dp[0]);
            next[1] = max(dp[0]-nums[i], dp[1]);
            swap(next, dp);
        }

        return dp[0];
    }
};