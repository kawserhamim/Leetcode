class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int>mp,mpp;
    vector<int>ans ;
    for(int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if(mp[nums[i]]> nums.size()/3 and mpp[nums[i]]==0)
        {
            ans.push_back(nums[i]);
            mpp[nums[i]] = 1 ;
        }
    } 
    return ans ;   
    }
};