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
    TreeNode *helper(vector<int> &in, int x, int y, vector<int> &po, int a, int b)
    {
        if(x > y && a > b) return NULL;

        TreeNode *cur = new TreeNode(po[b]);
        int start_idx = x;
        while(cur -> val != in[start_idx]) start_idx++;

        cur -> left = helper(in, x, start_idx-1, po, a, a+start_idx-x-1);
        cur -> right = helper(in, start_idx+1, y, po, a+start_idx-x, b-1);

        return cur;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
};