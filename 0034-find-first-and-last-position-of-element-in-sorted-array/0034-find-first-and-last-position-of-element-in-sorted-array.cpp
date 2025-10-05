class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int x = -1, y = -1 , n = nums.size(), z = target;
    int l =0 , r = n - 1 ;   
    int mid = l + r ;
    mid /= 2 ;
    while(l <= r)
    {
      if(nums[mid] > z)r = mid - 1 ;
      else if(nums[mid] < z)l = mid + 1 ;
      else{
        x = mid ;
        r = mid - 1 ;
      }
      mid = l + r ;
      mid /= 2 ;
    } 
    l = 0 , r = n - 1 ;
    mid = l + r ;
    mid /= 2 ;
    while(l <= r)
    {
      if(nums[mid] < z)l = mid + 1 ;
      else if(nums[mid] > z )r = mid - 1 ;
      else{
        y = mid ;
        l = mid + 1 ;
      }
      mid = l + r ;
      mid /= 2 ;
    } 
    vector<int>v(2);
    v[0] = x ;
    v[1] = y ;
    return v ;
    }
};