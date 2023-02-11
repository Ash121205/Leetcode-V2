class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt, ans = 0;

        for(int i=0;i<32;i++)
        {
            cnt = 0;

            for(int j=0;j<nums.size();j++)
            {
                cnt += nums[j] & 1;
                nums[j] >>= 1;
            }

            cnt = cnt % 3;
            ans = ans | cnt << i;
        }
        return ans;
    }
};