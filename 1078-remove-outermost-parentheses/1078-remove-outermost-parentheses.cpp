class Solution {
public:
    string removeOuterParentheses(string s) {
           string ans = "" , x = "" ;
    int c = 0 ;
    int n = s.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '(')c++;
        else c--;
        if(s[i] == '(' and c ==  1 )
        x = x ;
        else if(c == 0)
        x = x ;
        else 
        {
            x += s[i];
        }
       // cout<<x<<endl;
        if(c == 0 )
        {
            ans += x ;
            x = "";
        }
    }
    return ans ; 
    }
};