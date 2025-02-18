class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int current = 0 , maxsum ;

        for(int i = 0 ; i < k ; i++) {
            current+= nums[i];
        }
        
        maxsum = current;

        for(int i = k ; i < nums.size() ; i++) {
            current = current - nums[i-k] + nums[i];
            maxsum = max(maxsum , current);
        }

        return maxsum / (k * 1.0);
    }
};