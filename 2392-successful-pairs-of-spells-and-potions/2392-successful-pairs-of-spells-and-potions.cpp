class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin() , potions.end());

        vector<int> ans;
        for(auto i : spells) {
            int low = 0 , high = potions.size() - 1, index = potions.size(); 
            while(low <= high) {
                int mid = (low + high) / 2;
                long long val = (long long) potions[mid] * i;
                if(val >= success) {
                    high = mid - 1;
                    index = mid; 
                } else {
                    low = mid + 1;
                }
            }
            ans.push_back(potions.size() - index);
        }

        return ans;
    }
};