class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>ans;
    sort(intervals.begin(), intervals.end());
    int a = intervals[0][0];
    int b = intervals[0][1];
    int n = intervals.size();
    for(int i = 1 ; i < n ; i++ )
    {
       if(intervals[i][0] <=  b )
       {
         a = min ( a, intervals[i][0]);
         b = max ( b, intervals[i][1]);
       }else{
         ans.push_back({a,b});
         a = intervals[i][0];
         b = intervals[i][1];
       }
    }  
       ans.push_back({a,b});
       return ans ;
    }
};