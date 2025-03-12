class Solution {
public:
    int minAddToMakeValid(string s) {
    int n = s.size();
    int ans = 0 , x = 0 ; 
    for(int i = 0 ; i < n ; i++)
    {
      if(s[i] =='(')
      {
        if(x < 0)
        {
            ans += abs(x);
            x = 0 ;
        }
          x++;
      }else x--;
    } 
    ans += abs(x);
    return ans ;   
    }
};