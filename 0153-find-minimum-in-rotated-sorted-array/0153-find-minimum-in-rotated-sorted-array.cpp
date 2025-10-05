class Solution {
public:
    int findMin(vector<int>& nums) {
    int  n = nums.size();
    int ans = -1 , l = 1 , r = n - 1 ;
    int mid = l + r ;
    mid /= 2 ;
    while(l <= r)
    {
       if(nums[0] <= nums[mid])
       {
         ans = mid ;
         l = mid + 1 ;
       }else r = mid - 1 ;
       mid = l + r ;
       mid /= 2 ;
    }    
    if(ans == -1 )
    {
    if(n==1)  return nums [0] ;
    else return nums[1];

    }
    if(ans == n-1)return nums[0] ;
    return nums[ans + 1] ;
    }
};