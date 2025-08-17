class Solution {
public:
    string frequencySort(string s) {
   int n = s.size();
       unordered_set<char>st;
       unordered_map<char,int>mp;
       for (int i = 0; i < n ; i++)
       {
         mp[s[i]]++;
         st.insert(s[i]);
       }
       priority_queue<pair<int,char>>pr;
      for(auto it : st)
      {
         pr.push({mp[it], it});
      }
      string ans = "";
      while(pr.size())
      {
         auto tp = pr.top(); pr.pop();
         
         for (int i = 0; i < tp.first ; i++)
         {
            ans += tp.second;
         }
         
      } 
      return ans ;
    }
};