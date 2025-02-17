class Solution {
public:
    bool isVowel(char c) {
        char l = tolower(c);
        if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int left = 0 ; 
        int right = s.size() - 1 ; 

        while(left < right) {
            while(left < s.size() && !isVowel(s[left]) ) {
                left++;
            }

            while(right >= 0 && !isVowel(s[right])) {
                right--;
            }
            if (left < right) { 
            swap(s[left] , s[right]);
            left++ , right--;
            }
        }

        return s;
    }
};