class Solution {
public:
 void hamim(vector<int>nums,vector<vector<int>>&x,vector<int>y, int i)
{
  if(i==nums.size())
  {
    x.push_back(y);
    return ;
  }
   hamim(nums,x,y,i+1);
   long d = nums[i];
   y.push_back(d);
   hamim(nums,x,y,i+1);
}
 vector<vector<int>> subsets(vector<int>& nums){

    //vector<vector<long>>v;
    int i = 0 ; vector<vector<int>> x ;
     vector<int>y;
     hamim(nums,x,y,i);
     
   return x ;
 }
};