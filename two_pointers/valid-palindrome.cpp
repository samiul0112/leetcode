class Solution {
public:
    bool fnc(char ch) {
        if(ch >= '0' && ch <= '9') return true;
        if(ch >= 'a' && ch <= 'z') return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j) {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
            if(s[j] >= 'A' && s[j] <= 'Z') s[j] = s[j] - 'A' + 'a';
            if(!fnc(s[i])) {
                i++;
                continue;
            }
            if(!fnc(s[j])) {
                j--;
                continue;
            }
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};