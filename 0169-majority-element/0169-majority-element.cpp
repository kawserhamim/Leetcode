class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        mp[nums[i]]++;
    }   
    priority_queue<pair<int,int>>pq;
    for(auto &it : mp)
    {
      pq.push({it.second,it.first});
    }
    int n = pq.top().second;
    return n ;
    }
};