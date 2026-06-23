class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& ts) {
        int n = ts.size();
        stack<pair<int, int>> ms;
        vector<int> res (n, 0);
        for(int i = 0; i < n; i++) {
            int t = ts[i];
            while(!ms.empty() && t > ms.top().first) {
                auto p = ms.top();
                ms.pop();
                res[p.second] = i - p.second;
            }
            ms.push({t, i});
        }
        return res;
    }
};
