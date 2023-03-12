class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        
        vector<long long>pf(nums.size());
        
        pf[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            pf[i] = pf[i-1] + nums[i];
        }
        long long ans = 0;
        for (int i=0;i<pf.size();i++) {
            if (pf[i] > 0) {
                ans++;
            }
        }
        return ans;
        
    }
};