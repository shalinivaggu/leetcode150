class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newstr = "" ; 
        int i = 0 ;

        while(i < word1.length() || i < word2.length()) {
            if(i < word1.length()) {
                newstr += word1[i];  
            }

            if(i < word2.length()) {
                newstr += word2[i];
            }

            i++;
        }  

        return newstr;
    }
};