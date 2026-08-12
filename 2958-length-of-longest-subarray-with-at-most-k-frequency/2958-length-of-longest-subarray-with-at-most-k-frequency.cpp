class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int n = nums.size();
        int low = 0;
        int high = 0;

        unordered_map<int, int> mp;
        int res = 0;

        for (high = 0; high < n; high++) {

            mp[nums[high]]++;

            while (mp[nums[high]] > k) {
                mp[nums[low]]--;
                low++;
            }

            int len = high - low + 1;
            res = max(res, len);
        }

        return res;
    }
};