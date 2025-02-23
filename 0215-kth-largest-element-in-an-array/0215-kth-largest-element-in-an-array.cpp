class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int> , greater<int>> ans ; 

        for(int num : nums) {
            ans.push(num);
            if(ans.size() > k) {
                ans.pop();
            }
        }

        return ans.top();
    }
};