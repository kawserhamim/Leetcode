class Solution {
public:
    int integerBreak(int n) {
        int ans = INT_MIN;
      if(n==3)return 2 ;
    for(int i = 1 ; i  <= (n+1)/2 ; i++)
    {
        if(n%i==0)
          {
            int x = 1 ;
            for(int j=1 ; j <= n/i ; j++){
              x *= (i);  
            }
            ans = max(ans,x);
          }
          else{
            if(n%i==1)
            {
                 int x = 1 ;
            for(int j=1 ; j <=( n/i )-1 ; j++){
              x *= (i);  
            }
              x *= (i+1);
             ans = max(ans,x);
            }
            else{
              
                 int x = 1 ;
            for(int j=1 ; j <=( n/i ) ; j++){
              x *= (i);  
            }
              x *= (n%i);
             ans = max(ans,x);  
            }
          }
    }   
          return ans ;
    }
};