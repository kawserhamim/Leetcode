class Solution {
public:
    int minBitFlips(int start, int goal) {
    vector<int>v(31,0), vv(31,0);
    int x = start, y = goal ;
    for(int i = 30  ; i >= 0 ; i--)
    {
      if(x -(1 << i) >= 0 )
      {
        v[i] = 1 ;
        x -= (1 << i);
      }
    }   
      for(int i = 30  ; i >= 0 ; i--)
    {
      if(y -(1 << i) >= 0 )
      {
        vv[i] = 1 ;
        y -= (1 << i);
      }
    }
    int ans = 0; 
    for(int i = 0 ;i < 31 ; i++)
    {
        if(v[i] ^ vv[i] != 0)
         ans++;
    }
    return ans ;
    }
};