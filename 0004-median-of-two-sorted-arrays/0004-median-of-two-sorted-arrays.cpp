class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        vector<int> num = num1;
        num.insert(num.end() , num2.begin() , num2.end());
        sort(num.begin() , num.end());
        int n = num.size();
        if(n % 2 == 0) 
            return (num[n/2] + num[n/2 - 1]) / 2.0 ;
        else
            return num[n/2];

    }
};