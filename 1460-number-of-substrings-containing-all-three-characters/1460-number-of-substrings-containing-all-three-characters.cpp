class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> last(3, -1); // last index of a,b,c
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
            if (last[0] != -1 && last[1] != -1 && last[2] != -1) {
                ans += 1 + min({last[0], last[1], last[2]});
            }
        }
        return ans;
    }
};
