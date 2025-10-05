class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int ans =  -1 , l = 0 , r = n-1 , x = INT_MAX;
    int mid = l + r ;
    mid /= 2 ;
    while(l <= r)
    {
        if(nums[mid] == target)return mid ;
        else if(nums[mid] < target)
        {
            if( target - nums[mid]  < x )
            {
                x =  target - nums[mid] ;
                ans = mid ;
            }
            l = mid+1;
        }
        else r = mid - 1 ;
        mid = l + r ;
        mid /= 2 ;
    }    
    return ans+1 ;
    }
};