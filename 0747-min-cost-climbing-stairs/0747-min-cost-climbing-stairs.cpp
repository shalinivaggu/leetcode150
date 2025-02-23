class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int prev1 = 0 , prev2 = 0 ;
        for(int i = 2  ; i <= n ; i++) {
            int step1 = prev1 + cost[i-1];
            int step2 = prev2 + cost[i-2];
            prev2 = prev1;
            prev1 = min(step1 , step2);
        }
        return prev1;
    }
};