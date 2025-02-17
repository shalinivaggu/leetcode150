class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int n = nums.size();
        int j = -1;

        for(int i = 0 ; i < n ; i++) {
            while(i < n && nums[i] != 0) {
                i++;
            }
            j = i ; 

            while(i < n && nums[i] == 0) {
                i++;
            }
            if(i < n && j < n)
                swap(nums[j] , nums[i]);
                i = j ;
        }
    }
};