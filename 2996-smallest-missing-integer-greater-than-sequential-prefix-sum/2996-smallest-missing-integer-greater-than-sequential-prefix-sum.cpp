class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum = sum + nums[i];
                cout<<sum<<" ";
            } else {
                break;
            }
        }
        int prefix = sum;
        cout << prefix;
        while (true) {
            int i = 0;
            for (; i < nums.size(); i++) {
                if (nums[i] == prefix) {
                    prefix++;
                    break;
                }
            }

            if (i == nums.size()) {
                return prefix;
            }
        }
    }
};