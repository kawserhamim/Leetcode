class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int ans = nums[0] , x = 1, y = 1 ;
    for(int i = 0 ; i < nums.size() - 1  ; i++)
    {
       if(nums[i] == nums[i+1]) y++;
       else y = 1 ;
       if(y > x)
       {
         ans = nums[i];
         x = y ;
       }
    }
    return ans ;
    }
};