class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0 , r = n - 1 ;
    int mid = i + r ;
    mid /= 2 ;
    while(i <= r)
    {
        if(nums[mid] > target)r = mid - 1 ;
        else if(nums[mid] < target)i = mid + 1 ;
        else return mid ;
        mid = i + r ;
        mid /=  2 ;
    }    
    return -1 ;
    }
};