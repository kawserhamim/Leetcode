class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n = INT_MAX;
    for(int i = 0 ; i < strs.size(); i++)
    {
        int m = strs[i].size();
        n = min(m , n);
    }    
    
    string ans = "";
    for(int i = 0 ; i < n ; i++)
    {
        set<char>st;
        for(int j = 0 ; j < strs.size() ;j++)
        {
           st.insert(strs[j][i]);
        }
        if(st.size() == 1)
        {
            auto it = st.begin();
            ans += *it;
        }else break;
    }
    return ans ;
    
        }
};