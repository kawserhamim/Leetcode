class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     int n = numRows;
     vector<vector<int>>v;
     if(n == 0)return v ;
     v.push_back({1});
     
     int i = 1 ;
     while(i < n)
     {
        vector<int>ll;
        ll.push_back(1);
        for(int j = 0 ; j < v[i-1].size() - 1; j++)
        {
            ll.push_back(v[i-1][j]+v[i-1][j+1]);

        }
        ll.push_back(1);
        v.push_back(ll);
        i++;
     } 
     return v ;  
    }
};