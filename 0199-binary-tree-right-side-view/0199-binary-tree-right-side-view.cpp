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

    void rightView(TreeNode* root , vector<int>& view, int height) {
        if(!root) return ;
        height = height + 1 ; 
        
        if(height > view.size()) { 
            view.push_back(root->val);
            
        }
        rightView(root->right, view, height); 
        rightView(root->left, view, height);   

    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> view;
        rightView(root, view , 0);
        return view;
    }
};