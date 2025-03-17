class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0, smm = 0;
        unordered_map<int, int> mp; 
        
        mp[0] = 1; 
        for(int i = 0; i < n; i++) {
            smm += nums[i];
            
            
            if (mp.count(smm - k)) {
                ans += mp[smm - k];
            }
            
            
            mp[smm]++;
        }
        
        return ans;
    }
};
