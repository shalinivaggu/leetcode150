class Solution {
public:
    bool isVowel(char c) {
        char v = tolower(c);
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u') {
            return true;
        } 
        return false;
    }

    int maxVowels(string s, int k) {
        int countVow = 0 , maxvow;
        for(int i = 0 ; i < k ; i++) {
            countVow += isVowel(s[i]) ;
        }

        maxvow = countVow;

        for(int i = k ; i < s.size() ; i++) {
            countVow += isVowel(s[i]) - isVowel(s[i-k]);


            maxvow = max(countVow , maxvow);
        }

        return maxvow;
    }
};