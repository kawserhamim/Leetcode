class Solution {
public:
    int numberOfSubstrings(string s) {
     deque<int>a,b,c;
     int n = s.size();
     for(int i = 0 ; i < n ; i++)
     {
        if(s[i]=='a')a.push_back(i+1);
        else if(s[i]=='b')b.push_back(i+1);
        else c.push_back(i+1);
     } 
     int ans = 0 ;
     int d = a.size();
     int e = b.size();
     int f = c.size();
     int g = min(d,min(e,f));
     int i = 0 ;
     while(g)
     {
       int u = max(a[0],max(b[0],c[0]));
       int y = (n+1)-u;
       ans += y ;
       if(s[i]=='a')a.pop_front();
       if(s[i]=='b')b.pop_front();
       if(s[i]=='c')c.pop_front();
      d = a.size();
      e = b.size();
      f = c.size();
      g = min(d,min(e,f));
      i++;
     }   
     return ans ;
    }
};