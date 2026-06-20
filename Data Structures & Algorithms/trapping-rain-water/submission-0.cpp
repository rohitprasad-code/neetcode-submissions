class Solution {
public:
    int trap(vector<int>& hs) {
        int n = hs.size();
        
        vector<int> lmax(n, 0), rmax(n, 0);

        // leftMax
        lmax[0] = hs[0];
        for(int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], hs[i]);
        }
        // rightMax
        rmax[n - 1] = hs[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], hs[i]);
        }
        // sum
        int totwater = 0;
        for(int i = 0; i < n; i++) {
            totwater += (min(lmax[i], rmax[i]) - hs[i]);
        }
        return totwater;
    }
};
