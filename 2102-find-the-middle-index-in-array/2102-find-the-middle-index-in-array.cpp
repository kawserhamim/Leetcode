class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int n = nums.size();
    int a[n];
    for(int i  = 0 ; i < n ; i++)
    {
       if(!i)a[i] =  nums[i];
       else a[i] = nums[i] + a[i-1];
    } 
    int x = a[n-1];
    for(int i = 0 ; i < n ; i++)
    {
       if( i == 0)
       {
         int y = x - a[i];
         if(y == 0)return i ;
         continue;
       }
       int y = x - nums[i];
       int z = a[i-1];
       if(z + z == y)return i ;
    } 
    return -1 ;  
    }
};