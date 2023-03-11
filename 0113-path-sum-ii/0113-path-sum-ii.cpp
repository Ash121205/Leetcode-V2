/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        helper(root, targetSum, path, ans);

        return ans;
    }

private:
    void helper(TreeNode *node, int sum, vector<int> &path, vector<vector<int>> &ans)
    {
        if(!node) return;

        path.push_back(node->val);
        if((node -> left == NULL) && (node->right == NULL) && sum == node->val)
        {
            ans.push_back(path);
        }

        helper(node->left, sum-node->val, path, ans);
        helper(node->right, sum-node->val, path, ans);
        path.pop_back();
    }
};