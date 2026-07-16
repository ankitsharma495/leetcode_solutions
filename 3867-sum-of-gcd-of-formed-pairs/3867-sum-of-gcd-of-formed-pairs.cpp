class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        long long  sum = 0;
        int mx = INT_MIN;
        for(int i = 0 ; i<nums.size();i++){

            mx = max(nums[i], mx);
            prefixGcd[i] = __gcd(nums[i], mx);

        }
        
        sort(prefixGcd.begin(), prefixGcd.end());
        int small = 0;
        int big = n-1;
        while(small<big){
            int gec = __gcd(prefixGcd[small] , prefixGcd[big]);
            sum = sum+ gec;
            small++;
            big--;
        }

        return sum;
        
    }
};