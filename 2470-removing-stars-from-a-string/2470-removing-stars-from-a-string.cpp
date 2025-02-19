class Solution {
public:
    string removeStars(string s) {
        std::vector<char> newstr(s.size());
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                j--; 
            } else {
                newstr[j] = s[i]; 
                j++; 
            }
        }

        return std::string(newstr.begin(), newstr.begin() + j);
    }
};