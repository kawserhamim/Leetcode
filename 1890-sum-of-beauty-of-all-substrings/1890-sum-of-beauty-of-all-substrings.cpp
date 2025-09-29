class Solution {
public:
    int beautySum(string s) {
           int n = s.size();
    unordered_map<char,int>mp;
    int ans =  0;
    int x = INT_MAX, y = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
       mp[s[i]]++;
       unordered_map<char,int>mm(mp.begin(), mp.end());
       for(int j = 0 ; j < i ; j++)
       {
          int x = INT_MAX, y = 0 ;
          for(auto it : mm)
          {
            // cout << it.first << " " << it.second << endl ;
            if(mm[it.first]) x = min(x,it.second);
            if(mm[it.first]) y = max(y ,it.second);
          }
          // cout<< y << " " << x << endl;
          ans += (y - x);
          mm[s[j]]--;
       }
     //  cout<<endl;
    
    }   
    return ans ; 
    }
};