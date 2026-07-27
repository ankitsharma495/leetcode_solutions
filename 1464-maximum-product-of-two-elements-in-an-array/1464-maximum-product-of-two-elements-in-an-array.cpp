class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int prod = 1;
        int n = nums.size();
        prod = (nums[n-1]-1)*(nums[n-2]-1);
        
        return prod ; 
        
    }
};