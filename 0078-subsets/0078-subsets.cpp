class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total = 1 << n; 
        vector<vector<int>> result;

        for (int mask = 0; mask < total; mask++) {
            vector<int> subset;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) { 
                    subset.push_back(nums[i]);
                }
            }
            result.push_back(subset);
        }

        return result;
    }
};
