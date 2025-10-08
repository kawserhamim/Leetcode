class Solution {
public:
    int countPrimes(int n) {
    vector<bool>v(n+1,false);
    for(int i = 2 ; i*i <= n ; i++)
    {
      if(v[i] == false)
      {
         for(int j = i*i; j <= n; j += i )
         {
            v[j] = true ;
         }
      }
    } 
     int ans = 0 ;   
    for(int i = 2 ; i < n ; i++)
    {
        if(v[i] == false)ans++;
    }
    return ans ;
    }
};