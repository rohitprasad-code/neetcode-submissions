class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r) {
            int s = nums[l] + nums[r];
            if(s > t)
                r--;
            else if(s < t)
                l++;
            else
                return {l + 1, r + 1};
        }
        return {-1, -1};
    }
};
