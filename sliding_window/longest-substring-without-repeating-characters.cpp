class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i = 0, j = 0, ans = 0;
        while(i < s.size()) {
            if(mp[s[i]] == 0) {
                mp[s[i]]++;
                i++;
                ans = max(ans, i - j);
            }
            else {
                mp[s[j]]--;
                j++;
            }
        }
        return ans;
    }
};