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
    if (!root) return 0; // Handle the case of an empty tree

    queue<TreeNode*> q;
    pair<int, int> maxSum(-1, -1); // maxSum.first = level, maxSum.second = sum
    int level = 0;
    q.push(root);

    while (!q.empty()) {
        int length = q.size(), sum = 0; 
        level++;
        for (int i = 0; i < length; i++) {
            TreeNode* front = q.front();
            sum += front->val; // Accumulate the sum of the current level
            q.pop();
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
        }

        // Update maxSum if the current level sum is greater
        if (maxSum.second < sum) {
            maxSum.first = level; 
            maxSum.second = sum; 
        }
    }

    return maxSum.first; // Return the level with the maximum sum
}
    
};