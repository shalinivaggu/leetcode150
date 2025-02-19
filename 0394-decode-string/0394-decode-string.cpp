class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(char c : s) {
            if(c != ']') {
                st.push(c);
            }
            else {
                string temp = "";
                while(!st.empty() && st.top() !='[' ) {
                    temp += st.top();
                    st.pop();
                }
                reverse(temp.begin() , temp.end());

                st.pop();

                string freq = "";
                while(!st.empty() && ('0' <= st.top() && st.top() <= '9')) {
                    freq+= st.top();
                    st.pop();
                }

                reverse(freq.begin() , freq.end());

                int size = stoi(freq);

                for(int i = 0 ; i < size; i++) {
                    for(char c : temp) st.push(c);
                }
            }
        }

        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
};