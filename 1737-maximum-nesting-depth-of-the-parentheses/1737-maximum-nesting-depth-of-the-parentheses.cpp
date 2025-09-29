class Solution {
public:
    int maxDepth(string s) {
    int n = s.size(), x = 0 , ans = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
      if(s[i] == '(')x++;
      else if(s[i] == ')')x--;
      ans = max(ans, x);
    }   
    return ans ;
    }
};