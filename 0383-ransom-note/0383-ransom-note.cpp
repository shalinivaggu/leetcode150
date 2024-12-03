class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> mp;

        for(auto i : magazine) {
            if(mp.find(i) == mp.end()) {
                mp[i] = 1 ;
            }else {
                mp[i]++;
            }
        }

        for(auto i : ransomNote) {
            if(mp.find(i) == mp.end() || mp[i] == 0) {
                return false;
            } else{
                mp[i]--;
            }
        }
        
        return true;
    }
};