class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int low = 0 ; 
        int high = 0;
        int res = INT_MIN;
        int n = s.length();
        unordered_map<char , int> mp;
        for(high ; high<n ; high++){
            
            mp[s[high]]++;
            int len = high - low +1;
            while(mp.size()<len){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
                len = high - low +1;
            }
            res = max(len , res);




        }
        if(res == INT_MIN){
            return 0;
        }
        else return res;
        
    }
};