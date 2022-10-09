class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo = 0, hi = height.size() - 1, ans = 0;
        while(lo < hi) {
            int val = min(height[lo], height[hi]) * (hi - lo);
            ans = max(ans, val);
            if(height[lo] < height[hi]) lo++;
            else hi--;
        }
        return ans;
    }
};