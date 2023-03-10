class Solution {
public:
    vector<int> a;
    Solution(vector<int>& nums) {
        a = nums;
    }
    
    int pick(int target) {
        int n = 0, ans = -1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] != target) continue;

            if(n==0) ans = i, n++;
            else
            {
                n++;
                if(rand() % n == 0) ans = i;
            }
        }

        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */