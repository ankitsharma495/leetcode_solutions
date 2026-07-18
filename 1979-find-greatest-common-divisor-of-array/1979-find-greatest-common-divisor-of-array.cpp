class Solution {
public:
    int gcdcal(int i , int j){

        if(j ==0){
            return i;
        }
        return gcdcal(j , i%j);


    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = nums[0];
        int j = nums[nums.size()-1];
        return gcdcal(i , j);
        
    }
};