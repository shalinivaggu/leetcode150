class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int ind = max_element(candies.begin() , candies.end()) - candies.begin() ;
        int max =  candies[ind];
        vector<bool> v;

        for(int i = 0 ; i < candies.size() ; i++) {
            if (candies[i] + extraCandies >= max) {
                v.push_back(true);
            } else {
                v.push_back(false);
            }
        }
        return v;
    }
};