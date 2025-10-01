class Solution {
public:
    int numberOfSubstrings(string s) {
    int n = s.size();
    unordered_map<char,deque<int>>mp;
      for(int i = 0 ; i < s.size() ; i++){
         mp[s[i]].push_back(i);
      }
      if(mp['a'].size() == 0 || mp['b'].size() == 0 || mp['c'].size() == 0)
      return 0 ;
      int ans =  0;
      int x = max(mp['a'][0],mp['b'][0]);
      int y = mp['c'][0];
      x = max(x , y);
      ans += (n - x);
      for (int i = 0; i < n ; i++)
      {
         char c = s[i];
         mp[s[i]].pop_front();
         if(!mp[c].size())
         {
            break;
         }else{
      x = max(mp['a'][0],mp['b'][0]);
      y = mp['c'][0];
      x = max(x , y);
      ans += (n - x);
         }
      }
      return ans ;     
    }
};