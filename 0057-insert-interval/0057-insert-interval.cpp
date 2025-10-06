class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), x = -1, y = -1, a, b = -1;

    
        for (int i = 0; i < n; i++) {
            if (!(intervals[i][1] < newInterval[0] || intervals[i][0] > newInterval[1])) {
                if (x == -1) x = i;
                y = i;
            }
        }

        vector<vector<int>> ans;

       
        if (x != -1) {
            a = newInterval[0];
            b = newInterval[1];
            for (int i = x; i <= y; i++) {
                a = min(a, intervals[i][0]);
                b = max(b, intervals[i][1]);
            }
            for (int i = 0; i < x; i++) {
                ans.push_back(intervals[i]);
            }
            ans.push_back({a, b});
            for (int i = y + 1; i < n; i++) {
                ans.push_back(intervals[i]);
            }
        } 
      
        else {
            bool inserted = false;
            for (int i = 0; i < n; i++) {
                if (!inserted && newInterval[0] < intervals[i][0]) {
                    ans.push_back(newInterval);
                    inserted = true;
                }
                ans.push_back(intervals[i]);
            }
            if (!inserted) ans.push_back(newInterval);
        }

        return ans;
    }
};
