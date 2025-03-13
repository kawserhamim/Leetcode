class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   int i = 0 , j = 0;
    int n = s.size() ;
    int x = 0, y = 0 , best = 0 ;
    unordered_map<char,int>mp;
    while(i < n)
    {
      mp[s[i]]++;
      if(mp[s[i]] == 1 )
      {
         x++;
         best = max(best,x);
      }else{
        
        while(mp[s[i]] > 1)
        {
            mp[s[j]]--;
            x--;
          //  best = max(x,best);
            j++;
        }
        x++;
     best = max(x,best);   
        
    }
     i++;
     
    }
     return best ;
    }
};