class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> ans ; 

        for(int num : nums) {
            ans.push(num);
        }
        while(k-- > 1) {
            ans.pop();
        }
        return ans.top();
    }
};