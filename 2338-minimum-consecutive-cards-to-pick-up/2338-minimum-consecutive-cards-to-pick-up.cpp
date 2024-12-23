class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> mp;
        int minCards = INT_MAX;
        for(int i = 0 ; i < cards.size() ; i++) {
            if(mp.find(cards[i]) == mp.end()) {
                mp[cards[i]] = i;
            } else {
                if(minCards > i - mp[cards[i]]) 
                    minCards = i - mp[cards[i]]  ;
                mp[cards[i]] = i ;
            }
        }

        if(minCards == INT_MAX) {
            return -1;
        } 
        return minCards + 1;
    }
};