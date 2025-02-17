class Solution {
public:
    bool isVowel(char c) {
            char low = tolower(c);
            return low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u';
        }
        
    string reverseVowels(string s) {
        vector<char> v;
        for(char i : s) {
            if(isVowel(i)) {
                v.push_back(i);
            }
        }

        reverse(v.begin() , v.end());
        int vowel_index = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            if(isVowel(s[i])) {
                s[i] = v[vowel_index++] ;
            }
        }
        return s;
    }
};