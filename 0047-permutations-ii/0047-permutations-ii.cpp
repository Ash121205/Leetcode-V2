class Solution {
public:
    void solve(vector<int> nums, vector<vector<int>> &ans, int idx){

        if(idx>=nums.size()){
            ans.push_back(nums);
            return ;
        }

        unordered_set<int> s;
        for(int i=idx; i<nums.size(); i++){
            
            if(s.find(nums[i])!=s.end())
                continue;
            s.insert(nums[i]); 

            swap(nums[idx], nums[i]);
            solve(nums, ans, idx+1);   
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx=0;
        solve(nums, ans, idx);
        return ans;
    }
};