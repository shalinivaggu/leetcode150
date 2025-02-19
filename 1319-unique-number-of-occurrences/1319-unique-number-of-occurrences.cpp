class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(auto i : arr) {
            if(mp.find(i) == mp.end()) {
                mp[i] = 1 ;
            } else {
                mp[i]++;
            }
        }

        unordered_set<int> s;

        for(auto pair: mp) {
            cout<< pair.second << endl;
            if(s.find(pair.second) == s.end()) {
                s.insert(pair.second);
            } else {
                return false;
            }
        }
        return true;
    }
};