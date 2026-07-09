class Solution {
    int helper(vector<int>& arr, int k) {
        int tot = 0;
        for (int bananas : arr) {
            tot += (bananas + k - 1) / k;   // equivalent to ceil(bananas / k)
        }
        return tot;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (helper(piles, m) <= h) {
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        return res;
    }
};