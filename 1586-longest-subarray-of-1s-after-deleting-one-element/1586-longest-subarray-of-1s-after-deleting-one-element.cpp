class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0 , count = 0 , maxCount = INT_MIN;
        bool zero = false;

        for(int r = 0 ; r < nums.size() ; r++) {
            if(nums[r] == 1) {
                count++;
            }

            else if(nums[r] == 0 && zero) {
                while(nums[l] != 0) {
                    count--;
                    l++;
                }
                l++;
            } else {
                zero = true;
            }

            maxCount = max(count , maxCount);
        }

        if(zero) return maxCount;
        return maxCount - 1 ;
    }
};