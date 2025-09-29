class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int freq[26] = {0};  
            for (int j = i; j < s.size(); j++) {
                freq[s[j]-'a']++;

                int mn = 1e9, mx = 0;
                for (int f : freq) if(f) { mn = min(mn,f); mx = max(mx,f); }

                ans += mx - mn;
            }
        }
        return ans;
    }
};
