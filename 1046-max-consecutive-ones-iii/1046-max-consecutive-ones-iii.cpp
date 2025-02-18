class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 , maxlength = 0 , zeroCount = 0 ; 

        for(int right = 0 ; right < nums.size() ; right++) {
            if(nums[right] == 0) {
                zeroCount++;
            }

            while(zeroCount > k) {
                if(nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            maxlength = max(maxlength , right - left + 1);
        }

        return maxlength;
    }
};