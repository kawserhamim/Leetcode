class Solution {
public:
    vector<vector<int>> ans;

    void hamim(int j, int sum, vector<int> &x, int k, int n) {
        if (x.size() == k && sum == n) {
            ans.push_back(x);
            return;
        }
        if (x.size() > k || sum > n) return;

        for (int i = j; i <= 9; i++) {
            x.push_back(i);
            hamim(i + 1, sum + i, x, k, n);
            x.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> x;
        hamim(1, 0, x, k, n);
        return ans;
    }
};
