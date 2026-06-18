class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long multi = 1;
        int zeroCount = 0;

        for (auto num : nums) {
            if (num == 0) {
                zeroCount++;
            } else {
                multi *= num;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                nums[i] = 0;
            } else if (zeroCount == 1) {
                nums[i] = (nums[i] == 0) ? multi : 0;
            } else {
                nums[i] = multi / nums[i];
            }
        }

        return nums;
    }
};