class Solution {
public:
    char findTheDifference(string s, string t) {
    char ans ;
    unordered_map<char,int>mp , mm;
    set<char>st;
    for(int i = 0 ; i < s.size() ; i++)
    {
        mp[s[i]]++;
    }  
     for(int i = 0 ; i < t.size() ; i++)
    {
        mm[t[i]]++;
        st.insert(t[i]);
    }    
    for(auto it : st)
    {
        if(mp[it] != mm[it])
        {
            ans = it ;
        }
    }
    return ans;
    }
};