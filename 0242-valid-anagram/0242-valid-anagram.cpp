class Solution {
public:
    bool isAnagram(string s, string t){
    unordered_map<char,int>mp;
    int n = s.size();
    int x = 0 ;
    for(int i = 0 ;i < n ;i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] ==  1)x++;
    }
     for(int i = 0 ;i < n ;i++)
    {
        mp[t[i]]--;
        if(mp[t[i]]==0)x--;
        if(mp[t[i]] < 0 ) return false ;
    }
    if(x == 0 and s.size() == t.size())return true ;
    return false ;
    }
};