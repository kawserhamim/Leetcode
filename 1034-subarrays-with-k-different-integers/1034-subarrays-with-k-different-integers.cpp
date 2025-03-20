class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0 , ans = 0 , x = 0 , y = 0 ;
      //  unordered_map<int,int>mp ;
        unordered_map<int,set<int>>st;
        while(i < n)
        {
           if(st[nums[i]].empty())x++;
         //  mp[nums[i]]++;
           st[nums[i]].insert(i);
           if(x == k)y++;
           if(x == k)
           {
              if(i + 1 >= n or st[nums[i+1]].empty())
              {
                int z = y ;
                while(x == k)
                {
                   auto it = st[nums[j]].begin();
                   st[nums[j]].erase(it);
                   if(st[nums[j]].empty())x--;
                   else{
                     auto it = st[nums[j]].begin();
                     ans +=min(z,i-(*it)+1);
                     z = min(z,i-(*it)+1);
                   }
                 //  mp[nums[j]]--;
                   j++;
                }
                ans += y ;
                y = 0 ;
              }
           }
           i++;
        }   
        return ans ;
    }
};