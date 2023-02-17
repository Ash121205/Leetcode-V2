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
    void helper(TreeNode* root, int& ans, int& prevVal) {
        if (root == nullptr)
            return;
        helper(root -> left, ans, prevVal);
        if (prevVal != -1) {
            ans = min(ans, root -> val - prevVal);
        }
        prevVal = root -> val;
        helper(root -> right, ans, prevVal);
        
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prevVal = -1;
        helper(root, ans, prevVal);
        return ans;
    }
};