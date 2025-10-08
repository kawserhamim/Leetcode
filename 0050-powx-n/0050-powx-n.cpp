class Solution {
public:
    double myPow(double x, int n) {
    long long y = n ;
    if(y < 0)
    {
        y = -y ;
        x = 1 / x ;
    }
    double ans = 1.0;
    while(y> 0)
    {
     if(y%2)
     {
        ans *= x ;
     }
     y /= 2 ;
     x *= x ;
    }  
      return ans ;
    }
};