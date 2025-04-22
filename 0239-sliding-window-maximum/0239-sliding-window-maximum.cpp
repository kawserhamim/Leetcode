class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    priority_queue<int>pq;
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i = 0 ; i < k ; i++)
    {
       pq.push(nums[i]); 
       mp[nums[i]]++;
    } 
    ans.push_back(pq.top());
    int i = k, j = 0 ;
    while(i < nums.size())
    {
       mp[nums[j]]--;
       j++;
       pq.push(nums[i]);
       mp[nums[i]]++;
       i++;
       while(mp[pq.top()] == 0)
       {
         pq.pop();
       }
       ans.push_back(pq.top());
    }
    return ans ;
    }
};