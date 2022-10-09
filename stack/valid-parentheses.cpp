class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(st.empty()) return false;
                char ch = st.top();
                if(s[i] == ')' && ch != '(') return false;
                if(s[i] == '}' && ch != '{') return false;
                if(s[i] == ']' && ch != '[') return false;
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        if(st.empty()) return true;
        return false;
    }
};