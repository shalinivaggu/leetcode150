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
    int solve(TreeNode* root ,int h) {
        if(!root) return 0;
        
        int k = root->val >= h ? 1 : 0  ;
        h = max(root->val , h);

        return k + solve(root->left , h) + solve(root->right , h) ;
    }

    int goodNodes(TreeNode* root) {
        return solve(root, INT_MIN);
    }
};