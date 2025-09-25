class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());    
    sort(s.begin(), s.end());    
    int n = s.size();
    int m = g.size();
    int i = 0 ,  j = 0 , ans = 0 ;
        while(i < n and j < m)
    {
         if(s[i] >= g[j])
         {
           i++; j++; ans++;
         }else{
            i++;
         }
    }
    return ans ;
    }
};