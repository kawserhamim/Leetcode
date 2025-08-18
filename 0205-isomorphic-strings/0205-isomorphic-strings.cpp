class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.size() != t.size())return false ;
    unordered_map<char,int>mp,mm;
    for(int i = 0 ; i <  s.size() ; i++)
    {
        if(mp[s[i]] == 0)
        {
            if(mm[t[i]])return false ;
            int y = t[i];
            mp[s[i]] = y ;
            mm[t[i]]++;
        }else{
            int y = t[i];

            if(mp[s[i]] != y)return false ;
        }
    }   
    return true ;
    }
};