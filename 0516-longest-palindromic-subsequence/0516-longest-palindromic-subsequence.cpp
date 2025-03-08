class Solution {
public:
    int hamim(string &s, int i, int j, vector<vector<int>> &dp) {
        if (i > j) return 0;  // Base case: empty substring
        if (i == j) return 1; // Base case: single character is always a palindrome

        if (dp[i][j] != -1) return dp[i][j]; // Memoization check

        if (s[i] == s[j]) {
            return dp[i][j] = 2 + hamim(s, i+1, j-1, dp);
        } else {
            return dp[i][j] = max(hamim(s, i, j-1, dp), hamim(s, i+1, j, dp));
        }
    }

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return hamim(s, 0, n-1, dp); // Start with full string
    }
};
