class Solution {
public:
    void f(int k , int n , int j , vector<int>& temp , vector<vector<int>>& ans) {
        if(k == 0) {
            if(n == 0) {
                ans.push_back(temp);
            }
            return;
        }

        for(int i = j ; i <= 9 ; i++ ) {
            if(n - i >= 0) {
                temp.push_back(i);
                f(k-1 , n-i , i+1 , temp , ans) ;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans; 

        vector<int> temp ; 
        f(k , n , 1 , temp , ans);
        return ans;
    }
};