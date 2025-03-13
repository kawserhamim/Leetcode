class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i = 0, j = 0;
    int n = s.size();
    int x = 0, best = 0;
    unordered_map<char,int>mp;
    while(i<n)
    {
        mp[s[i]]++;
        x++;
        while(mp[s[i]]>1)
        {
            mp[s[j]]--;
            x--;
            j++;
        }
        i++;
        best = max(x,best);
    }
    return best ;
    }
};