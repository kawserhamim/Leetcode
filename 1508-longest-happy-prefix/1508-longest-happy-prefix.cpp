class Solution {
public:
    string longestPrefix(string s) {
    int i = 1 , j = 0 ;
    int m = s.size();
    vector<int>v(m,0);
    while(i < m)
    {
      if(s[i] == s[j])
      {
        j++;
        v[i] = j ;
        i++;
      }else{
        if(j == 0)
        {
            v[i] = 0 ;
            i++;
        }else{
            j = v[j-1];
        }
      }
    } 
    int x = v[m-1];
    string ans = "";
    for(int i = 0 ; i < x ; i++)
    {
        ans += s[i];
    }   
     return ans ;
    }
};