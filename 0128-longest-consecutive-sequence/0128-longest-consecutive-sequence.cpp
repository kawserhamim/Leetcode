class Solution {
public:
    // Union-Find (Disjoint Set Union) structure
    unordered_map<int, int> parent, size;

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return;

        if (size[px] < size[py]) swap(px, py);
        parent[py] = px;
        size[px] += size[py];
    }

    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Initialize DSU
        for (int num : nums) {
            if (parent.count(num)) continue; // skip duplicates
            parent[num] = num;
            size[num] = 1;
        }

        // Union neighbors
        for (int num : nums) {
            if (parent.count(num + 1)) {
                unite(num, num + 1);
            }
        }

        // Find largest component size
        int longest = 0;
        for (auto& [num, _] : parent) {
            longest = max(longest, size[find(num)]);
        }

        return longest;
    }
};
