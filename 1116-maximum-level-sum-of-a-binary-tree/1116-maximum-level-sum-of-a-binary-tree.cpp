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
    int maxLevelSum(TreeNode* root) {
        if(!root) return INT_MIN;

        vector<int>ans;

        queue<TreeNode*> pendingNodes; 
        pendingNodes.push(root);

        while(!pendingNodes.empty()) {
            int size = pendingNodes.size();
            int sum = 0; 

            while(size--) {
                TreeNode* front = pendingNodes.front();
                pendingNodes.pop();

                sum += front->val ;

                if(front->left) pendingNodes.push(front->left);
                if(front->right) pendingNodes.push(front->right);
            }

            ans.push_back(sum);
        }

        return max_element(ans.begin() , ans.end()) - ans.begin() + 1;
    }
};