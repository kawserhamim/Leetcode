class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp; // number -> length of sequence
        int longest = 0;

        for (int num : nums) {
            if (mp.count(num)) continue; // skip duplicates

            int left = mp.count(num - 1) ? mp[num - 1] : 0;
            int right = mp.count(num + 1) ? mp[num + 1] : 0;

            int length = left + right + 1;
            mp[num] = length;

            // update boundaries
            mp[num - left] = length;
            mp[num + right] = length;

            longest = max(longest, length);
        }

        return longest;
    }
};
