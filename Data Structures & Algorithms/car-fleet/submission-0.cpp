class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> p;
        int n = speed.size();
        for (int i = 0; i < n; i++) {
            p.push_back({position[i], speed[i]});
        }
        sort(p.rbegin(), p.rend());
        stack<double> st;
        for (auto sp : p) {
            st.push((double)(target - sp.first) / sp.second);
            if (st.size() >= 2) {
                double curr = st.top();
                st.pop();
                double prev = st.top();

                if (curr <= prev) {
                    // Current car joins the fleet ahead.
                } else {
                    st.push(curr);
                }
            }
        }
        return st.size();
    }
};
