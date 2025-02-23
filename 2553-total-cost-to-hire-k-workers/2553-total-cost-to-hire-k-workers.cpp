class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int> , greater<int>> pq1;
        priority_queue<int, vector<int> , greater<int>> pq2;

        long long cost = 0 ; 
        int n = costs.size() ; 
        int i = 0 , j = n - 1;

        while(k--) {
            while(pq1.size() < candidates && i <= j) {
                pq1.push(costs[i++]);
            }

            while(pq2.size() < candidates && i <= j) {
                pq2.push(costs[j--]);
            }

            int min1 = pq1.size() > 0 ? pq1.top() : INT_MAX; 
            int min2 = pq2.size() > 0 ? pq2.top() : INT_MAX ; 

            if(min1 <= min2) {
                cost += min1 ; 
                pq1.pop();
            } else {
                cost+= min2;
                pq2.pop();
            }
        }

        return cost;
    }
};