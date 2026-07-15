class Solution {
public:

    int arr[201][201][201];
    const int MOD = 1e9 + 7;


    int solve(int i , vector<int>& nums , int seq1 , int seq2 ){

      if(i == nums.size()){
        bool nonzero = (seq1!= 0 && seq2 != 0);
        bool gcdmatching = (seq1 == seq2);

        if(nonzero && gcdmatching){
            return 1;
        }
        else return 0;
      }

      if(arr[i][seq1][seq2] != 0){

        return arr[i][seq1][seq2];
      }

      int skip = solve(i+1 , nums , seq1, seq2);
      int first = solve(i+1 , nums, __gcd(seq1 , nums[i]), seq2);
      int second = solve(i+1 , nums , seq1 , __gcd(seq2 , nums[i]));
    //   int ans = skip + first + second;

      arr[i][seq1][seq2] = (1LL * skip + first + second) % MOD;
      return arr[i][seq1][seq2];

    }

    int subsequencePairCount(vector<int>& nums) {
        return solve(0 , nums , 0 , 0 );
        
    }
};