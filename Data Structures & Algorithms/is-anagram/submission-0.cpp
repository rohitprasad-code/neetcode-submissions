class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss = s.size();
        int ts = t.size();
        if(ss != ts)
            return false;
        vector<int> allc(26, 0);
        for(int i = 0; i < ss; i++) {
            allc[s[i] - 'a']++;
            allc[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(allc[i] != 0)
                return false;
        }
        return true;
    }
};
