class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int size = nums.size();
        for (int i = 0; i < size; ++i) mp[nums[i]] = i;

        for (int i = 0; i < size; ++i) {
            int diff = target - nums[i];
            if (mp.count(diff) && mp[diff] != i) {
                return {i, mp[diff]};
            }
        }
        return {-1, -1};
    }
};
