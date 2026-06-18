class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto str : strs) {
            res.append(to_string(str.size()));
            res.push_back('#');
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while(i < s.size()) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            i = j + 1;

            strs.push_back(s.substr(i, len));
            i = i + len;
        }
        return strs;
    }
};
