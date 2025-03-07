class Solution {
public:
    int hamim(string &s, string &ss, int i, int j, vector<vector<int>> &dp, int n, int m) {
        if (i >= n || j >= m) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] == ss[j])
            return dp[i][j] = 1 + hamim(s, ss, i + 1, j + 1, dp, n, m);
        else
            return dp[i][j] = max(hamim(s, ss, i + 1, j, dp, n, m), hamim(s, ss, i, j + 1, dp, n, m));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return hamim(text1, text2, 0, 0, dp, n, m);
    }
};