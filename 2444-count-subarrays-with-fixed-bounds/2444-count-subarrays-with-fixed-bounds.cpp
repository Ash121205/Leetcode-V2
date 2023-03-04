class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        // int n = nums.size();
        int lastMin = -1;
        int leftbound = -1, lastMax = -1;

        long long int ans = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] >= minK && nums[i] <= maxK)
            {
                if(nums[i] == minK)
                {
                    lastMin = i;
                }
                if(nums[i] == maxK)
                {
                    lastMax = i;
                }

                ans += max(0, min(lastMax, lastMin) - leftbound);
            }
            else
            {
                leftbound = i;
                lastMax = -1;
                lastMin =  -1;
            }
        }

        return ans;
    }
};