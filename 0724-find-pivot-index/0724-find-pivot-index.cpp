class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0, rightsum = 0 ;
        int n = nums.size();
        for(int i = 1 ; i < n ; i++) {
            rightsum += nums[i];
        }

        for(int i = 0 ; i < n ; i++) {
            if(leftsum == rightsum) {
                return i;
            } 
            
            leftsum += nums[i];
            i+1 < n ? rightsum -= nums[i+1] : 0;
        }
        return -1;
    }
};