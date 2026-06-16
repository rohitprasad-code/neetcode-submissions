class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto str : strs) {
            vector<int> ss(26, 0);
            for(auto chr : str) {
                ss[chr - 'a']++;
            }
            string key = to_string(ss[0]);
            for(int i = 1; i < 26; i++) {
                key += (',' + to_string(ss[i]));
            }
            mp[key].push_back(str);

        }
        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        return result;
    }
};
