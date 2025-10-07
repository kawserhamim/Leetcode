class Solution {
public:
    bool isPowerOfTwo(int n) {
   // n = abs(n);
    if(n == 1) return true ;
    while(n > 1 and n % 2==0)
    n/=2 ;

    if(n != 1) return false ;
    return true ; 
    }
};