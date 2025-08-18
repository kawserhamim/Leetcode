class Solution {
public:
    string reverseWords(string s) {
        string ans = "", x = "";
        int n = s.size();
        vector<string> v;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!x.empty()) {
                    reverse(x.begin(), x.end()); 
                    v.push_back(x);
                    x = "";
                }
            } else {
                x += s[i];
                if (i == 0) { // last character
                    reverse(x.begin(), x.end());
                    v.push_back(x);
                }
            }
        }

        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
            if (i != v.size() - 1) ans += " ";
        }
        return ans;
    }
};
