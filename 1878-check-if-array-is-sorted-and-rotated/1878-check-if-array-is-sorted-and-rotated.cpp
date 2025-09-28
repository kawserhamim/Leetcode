class Solution {
public:
    bool check(vector<int>& nums) {
        int x = INT_MAX;
        int n = nums.size(), m = 0 ;
        for(int i = 0 ; i <  nums.size(); i++)
        {
            if(nums[i] < x)
            {
                x = nums[i];
                m = i ;
            }
        }    
         for(int i = 0 ; i <  nums.size(); i++)
        {
           if(nums[i] ==  x)
           {
             int x = 0 , y = -1 ;
             for(int j = i ; j < n ;j++)
             {
              if(y <= nums[j])
              {
                y = nums[j];
              }else x = 1 ;
             }
             for(int j = 0 ; j < i ;j++)
             {
              if(y <= nums[j])
              {
                y = nums[j];
              }else x = 1 ;
           }
           if(x == 0) return true ;
        }  
        }
        return false ; 
    }
};
