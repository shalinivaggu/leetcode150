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

    void findLeafs(TreeNode* root , vector<int> &v) {
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr) {
            v.push_back(root->val);
            return;
        }

        findLeafs(root->left , v);
        findLeafs(root->right , v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1 , v2;

        findLeafs(root1, v1);
        findLeafs(root2, v2);

        return v1 == v2;
    }
};