class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
    int n = nums.size();
    long long int a[n];
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(!i)a[i] = nums[i];
        else a[i] =  nums[i]+a[i-1];
    }    
    long x = a[n-1];
  //  if(x == 0)ans++;
    for(int i = 0 ; i <  n - 1 ; i++)
    {
        if(a[i]>=x-a[i])ans++;
    }
    return ans ; 
    }
};