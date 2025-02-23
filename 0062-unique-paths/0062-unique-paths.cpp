class Solution {
public:
    int uniquePaths(int m, int n) {
        int prior[n] , cur[n];
        for(int i = 0 ; i < n ; i++) {
            prior[i] = 1 ;
        }

        for(int i = 1 ; i < m; i++) {
            for(int j = 0; j < n ; j++) {
                cur[j] = prior[j] + ((j > 0) ?  cur[j-1] : 0);
            }

            for(int j = 0 ; j < n ; j++) {
                prior[j] = cur[j];
            }
        }

        return prior[n-1];
    }
};