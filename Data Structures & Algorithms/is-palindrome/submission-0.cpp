class Solution {
    string smoothString(string s) {
        string res = "";
        for (auto c : s) {
            if ('a' <= c && c <= 'z')
                res += c;
            else if ('A' <= c && c <= 'Z')
                res += (c - 'A' + 'a');  // convert to lowercase
            else if ('0' <= c && c <= '9')
                res += c;
        }
        return res;
    }

public:
    bool isPalindrome(string s) {
        s = smoothString(s);
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};