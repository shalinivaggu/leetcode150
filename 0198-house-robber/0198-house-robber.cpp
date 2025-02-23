class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        int p1 = nums[0];
        int p2 = max(nums[0] , nums[1]);

        for(int i = 2 ; i < n ; i++) {
            int max1 =  nums[i] + p1 ; 
            int max2 = p2 ; 
            int cur = max(max1 , max2);
            p1 = p2 ; 
            p2 = cur;
        }
        return p2;
    }
};