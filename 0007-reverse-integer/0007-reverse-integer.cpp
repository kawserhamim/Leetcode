class Solution {
public:
    int reverse(int x) {
   int n, sum=0 ;  string s;
  // if(x<INT_MIN || x>INT_MAX)return 0;
while(x)
{
    if (sum>INT_MAX/10 || sum<INT_MIN/10) return 0; 
   sum=sum*10+x%10;
   x /= 10;
}
 // if(x<0) n=-sum;
 // else n=sum;
  return sum ;
   
    }
};