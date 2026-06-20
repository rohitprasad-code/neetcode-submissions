class Solution {
public:
    int maxArea(vector<int>& hs) {
        int n = hs.size();
        int l = 0;
        int r = n - 1;
        int res = 0;
        while(l < r) {
            int area = min(hs[l], hs[r]) * (r - l);
            res = max(res, area);

            if(hs[l] <= hs[r])
                l++;
            else 
                r--;
        }
        return res;
    }
};
