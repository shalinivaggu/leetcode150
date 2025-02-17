class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0 ; 
        int n = chars.size();

        for(int i = 0 ; i < n ; i++) {
            char ch = chars[i];
            int count = 0; 

            while(i < n && chars[i] == ch) {
                count++; i++;
            }

            if(count == 1) chars[index++] = ch;
            else {
                chars[index++] = ch;
                string str = to_string(count);
                for(char dig : str) {
                    chars[index++] = dig;
                }
            }
            i--;
        }
        chars.resize(index);
        return index;
    }
};