class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int n = nums.size();
     int x = 0  ; 
     int i = 0, j = 0 ;
     int ans = 0 ;
     while(i < n)
     {
       if(nums[i] == 0)
       {
          x++;
       }
       while(x > k)
       {
        if(nums[j] == 0)
        {
         x--;
        }
         j++;
       }
       ans = max(i-j+1,ans);
       i++;
     }
     return ans ;
    }
};