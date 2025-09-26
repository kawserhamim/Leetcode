class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {   // iterate directly on the set (avoids duplicates)
            if (st.find(num - 1) == st.end()) { // only start from sequence beginning
                int current = num;
                int streak = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
