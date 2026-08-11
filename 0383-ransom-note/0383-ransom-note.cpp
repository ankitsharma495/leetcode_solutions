class Solution {
public:
    bool func(unordered_map<char , int> &mp1,
        unordered_map<char , int> &mp2){
        for(auto it: mp1){
            char c = it.first;
            int fransom = it.second;
            int fmagazine = mp2[c];
            if(fransom > fmagazine) return false;
        }
        return true;

        }
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> mp2;
        unordered_map<char , int> mp1;

        for (int i = 0 ; i< ransomNote.size(); i++){
            mp1[ransomNote[i]]++;
        }
         for (int i = 0 ; i< magazine.size(); i++){
            mp2[magazine[i]]++;
        }
        return func(mp1 , mp2);

        
    }
};