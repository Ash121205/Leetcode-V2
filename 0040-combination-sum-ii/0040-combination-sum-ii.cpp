class Solution {
public:
    void findans(vector<int>& candidates, int target, int sum, vector<vector<int>>& ans, vector<int>& ds, int index){
        if(target == sum){
            ans.push_back(ds);
            return;
        }
        if(candidates.size() == index)
            return;
        if(sum > target)
            return;
        ds.push_back(candidates[index]);
        findans(candidates, target, sum + candidates[index], ans, ds, index + 1);
        ds.pop_back();
        while(index < candidates.size()-1 && candidates[index] == candidates[index + 1])
            index++;
        findans(candidates, target, sum, ans, ds, index + 1);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findans(candidates, target, 0, ans, ds, 0);
        return ans;
    }
};