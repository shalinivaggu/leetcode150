class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prior(n , 1) ;
        vector<int> cur(n , 0);
        for(int i = 1 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++ ) {
                int top = i > 0 ? prior[j] : 0 ; 
                int left = j > 0 ? cur[j-1] : 0 ;
                cur[j] = top + left ; 
            }

            prior = cur;
        }
        return cur[n-1];
    }
};