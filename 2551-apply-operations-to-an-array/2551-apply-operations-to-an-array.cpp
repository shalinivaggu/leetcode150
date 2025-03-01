class Solution {
public:
    vector<int> applyOperations(vector<int>& num) {
        int n = num.size();
    
        for(int i = 0 ; i < n - 1 ; i++) {
            if(num[i] == num[i+1]) {
                num[i] *= 2 ; 
                num[i+1] = 0;
            }
        }   

        int k = 0; 
        for(int i = 0 ; i < n ; i++) {
            if(num[i] != 0) {
                swap(num[k] , num[i]);
                k++;
            }
        }

        return num;
    }
};