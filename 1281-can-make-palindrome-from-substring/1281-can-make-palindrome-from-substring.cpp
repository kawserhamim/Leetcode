class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int n = s.size();
        // Prefix sum array to count characters
        vector<vector<int>> a(n + 1, vector<int>(26, 0));

        // Build the prefix sum array
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                a[i + 1][j] = a[i][j]; // Copy previous counts
            }
            a[i + 1][s[i] - 'a']++; // Increment the current character count
        }

        vector<bool> ans;

        // Process each query
        for (const auto& query : queries) {
            int x = query[0]; // Start index
            int y = query[1]; // End index
            int z = query[2]; // Allowed replacements

            int hh = 0; // Count of characters with odd frequency
            for (int j = 0; j < 26; j++) {
                int count = a[y + 1][j] - a[x][j]; // Frequency of character j in the substring
                hh += (count % 2); // Increment hh if the count is odd
            }

            // Calculate the number of replacements needed
            int uu = hh / 2; // Each pair of odd counts can be fixed with one replacement
            if (hh % 2 != 0) uu++; // If there's an odd count, it can be the middle character

            // If the substring length is odd, one odd count is allowed (middle character)
            if ((y - x + 1) % 2 == 1) uu--;

            // Check if the required replacements are within the allowed limit
            if (uu <= z) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};