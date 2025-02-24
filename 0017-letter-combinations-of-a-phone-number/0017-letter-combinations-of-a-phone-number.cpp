class Solution {
public:
    vector<char>find_char(char n){
        if(n=='2') return {'a','b','c'};
        else if(n=='3')  return {'d','e','f'};
        else if(n=='4') return {'g','h', 'i'};
        else if(n=='5') return {'j', 'k', 'l'};
        else if(n=='6') return {'m', 'n', 'o'};
        else if(n=='7') return {'p', 'q', 'r', 's'};
        else if(n=='8') return{'t', 'u', 'v'};
        return {'w','x','y','z'};
    }

    void solve(vector<vector<char>> total , string str , int row , vector<string>& ans) {
        int n = total.size();
        if(n == row) {
            ans.push_back(str);
            return;
        }

        for(char c : total[row]) {
            solve(total , str + c , row + 1 , ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans; 
        if(digits.empty()) return ans;

        vector<vector<char>> total ; 
        for(int i = 0 ; i < digits.length() ; i++) {
            total.push_back(find_char(digits[i]));
        }
        solve(total , "" , 0 , ans);
        return ans;
    }
};