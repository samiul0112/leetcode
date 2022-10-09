class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size() < 3) return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int lo = i + 1, hi = nums.size() - 1;
            while(lo < hi) {
                int sum = nums[i] + nums[lo] + nums[hi];
                if(sum < 0) lo++;
                else if(sum > 0) hi--;
                else {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    int lo1 = lo, hi1 = hi;
                    while(lo < hi && nums[lo] == nums[lo1]) lo++;
                    while(lo < hi && nums[hi] == nums[hi1]) hi--;
                }
            }
        }
        return ans;
    }
};