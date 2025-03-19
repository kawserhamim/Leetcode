class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int ans = 1 ;
     int n = nums.size();
     int x = 0;
     for(int i =0 ; i < n ; i++)
     {
       if(nums[i] != 0)
       {ans *= nums[i];
        x++;
       }
     } 
     vector<int>v;
     for(int i = 0 ; i < n  ; i++)
     {
        if(nums[i] == 0)
        {
            if(x+1 == n)v.push_back(ans);
            else v.push_back(0);

        }else
        {
         if(x != n)
         {
            v.push_back(0);
            continue ;
         }
         v.push_back(ans/(nums[i]));
        }
     }
     return v ;   
    }

};