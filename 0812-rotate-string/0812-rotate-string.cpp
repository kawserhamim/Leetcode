class Solution {
public:
    bool rotateString(string s, string goal) {
    int n = s.size() , m = goal.size() ;
    int i = 0 , j = 0 ;
    if(s == goal)return true ;
    string a="", b="";
    while(i < n)
    {
        for(int u = 0 ; u <= i ; u++)
        {
          a += s[u];
        }
        for(int v = i+1 ; v < n ; v++)
        {
         b += s[v];
        }
        b += a ;
        if(b == goal) return true ;
        i++;
        a = "", b = "";
    }
    return false ;
    }
};