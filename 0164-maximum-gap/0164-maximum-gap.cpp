class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        int size = nums.size();
        if(size < 2) return 0;
        if(size == 2) return abs(nums[1]-nums[0]);
        
        int maxDiff = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size-1; ++i)
            maxDiff = max(maxDiff, nums[i+1]-nums[i]);
        
        return maxDiff;
    }
};