class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),[](auto &a, auto &b){
    return a[1] < b[1] ;
     }); 
     int x = intervals[0][1], ans = 0 ;
     for(int i = 1 ; i < intervals.size() ; i++)
     {
        if(x <= intervals[i][0])
        {
            x = intervals[i][1];
        }else ans++;
     }
     return ans ;
    }
};