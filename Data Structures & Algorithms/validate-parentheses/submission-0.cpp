class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        for(auto c : s) {
            if (c == '[' || c == '(' || c == '{') {
                b.push(c);
            }
            else {
                if (b.empty()) return false;
                
                // Check if the top of the stack matches the current closing bracket
                if ((c == ']' && b.top() != '[') ||
                    (c == ')' && b.top() != '(') ||
                    (c == '}' && b.top() != '{')) {
                    return false;
                }
                b.pop();
            }
        }
        return b.empty();
    }
};
