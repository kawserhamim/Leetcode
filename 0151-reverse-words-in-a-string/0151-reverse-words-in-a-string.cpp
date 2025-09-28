class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string x = "";
        int n = s.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!x.empty()) {
                    reverse(x.begin(), x.end());
                    if (!ans.empty()) ans += " ";
                    ans += x;
                    x = "";
                }
            } else {
                x += s[i];
            }
        }
        
        if (!x.empty()) {
            reverse(x.begin(), x.end());
            if (!ans.empty()) ans += " ";
            ans += x;
        }
        
        return ans;
    }
};
