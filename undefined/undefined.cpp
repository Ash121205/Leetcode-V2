class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
//         if(nums[0] == nums[n-1]) return 0;
//         else if((nums[1] == nums[n-1]) || (nums[0] == nums[n-2])) return abs(nums[n-1]-nums[0]);
//         // else if() return nums[n-1]-nums[0];
        
//         else{
//             int l = abs(nums[2] - nums[0]);
//             int h = abs(nums[n-1] - nums[3]);
//             return min(l+h, abs(nums[n-1]-nums[1])) - 1;
        
        long long ans = min((nums[n-3]-nums[0]), min((nums[n-2]-nums[1]), nums[n-1]-nums[2]));
        return ans;
    }
};