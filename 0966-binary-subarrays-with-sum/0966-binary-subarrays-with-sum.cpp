class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();  
  
     
    vector<int>v;
    int m =goal ;
    v.push_back(0);
    for(int i = 0 ; i < n ; i++)
    {
      if(nums[i]==1)
      v.push_back(i+1);
    } 
    v.push_back(n+1);
    int i = goal , j = 1 ;
    int ans = 0 ;
    if(m == 0)
    {
        int g = 1 ;
        while(g <v.size())
        {
            int hh = v[g]-v[g-1]-1;
            ans += (hh*(hh+1))/2;
            g++;
        }
      return ans ;
    }
    while(i < v.size() - 1)
    {
        int d = abs(v[j]-v[j-1]);
        int e = abs(v[i]-v[i+1]);
        ans += (d*e);
        i++; j++;
    }
    return ans ;
    }
};