class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int l = 0;
        for(auto num : nums) {
            if(s.find(num - 1) == s.end()) {
                int len = 1;
                while(s.find(num + len) != s.end())
                    len++;
                l = max(l, len);
            }
        }
        return l;
    }
};
