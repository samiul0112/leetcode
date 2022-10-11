class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int i = 0, j = 0, ans = 0, mx = 0;
        while(i < s.size()) {
            int idx = s[i] - 'A';
            count[idx]++;
            i++;
            mx = max(mx, count[idx]);
            if(i - j - mx > k) {
                int ii = s[j] - 'A';
                count[ii]--;
                j++;
            }
            ans = max(ans, i - j);
        }
        return ans;
    }
};