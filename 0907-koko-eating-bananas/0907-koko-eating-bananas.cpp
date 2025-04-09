class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int u = -1;
    for(int i = 0 ; i < n ; i ++)
    {
      u = max(u,piles[i]);
    }
    int l = 1 , r = u ;
    int mid = l + r ;
    mid /= 2 ;
    int ans =  r ;
    long long int x = 0 , y ;
    while(l <= r)
    {
       // x++;
        y  = 0 ;
      for(int i = 0 ; i < n ; i++)
      {
       y += (piles[i] / mid);
      if(piles[i] % mid ) y++;
      }
       
       if(y <= h)
       {
        ans = mid ;
        r = mid - 1 ;
       }else l = mid + 1 ;
       mid = l + r ;
       mid /= 2 ;
    }    
    return ans ; 
    }
};