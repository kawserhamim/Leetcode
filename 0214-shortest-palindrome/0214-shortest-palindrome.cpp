class Solution {
public:
    string shortestPalindrome(string s) {
     string t = "#";
   for(char c : s)
   {
     t += c ;
     t += "#";
   }
   vector<int>v(t.size());
   v[0]= 0 ;
   int l = 0 , r = 0 , k = 0 , lnn = 0 ;
   int center , ln = 0 , j ;
   for (int i =  1; i < t.size() ; i++)
   {
      if(i > r)k = 0 ;
      else{
        j = l + r - i ;
        if(l < j - v[j])
        {
            v[i] = v[j];
            continue ;
        }
        k = r - i + 1 ;
    }
        while(i+k < t.size() and i - k >= 0  and t[i+k] == t[i-k] )
        {
          k++;
        }
        k--;
        v[i] = k ;

        if( ((i / 2)-(v[i]/2)) == 0 )
        {
            center = i ;
            
            ln =max(ln, v[i]);
            
        }
        if(i + k > r )
        {
            l = i - k ;
            r = i + k ;
        }
      
   }
    string ans = "";

    for(int i = s.size()-1 ; i >= ln ; i--)
    {
      ans += s[i];
    }
     ans += s ;
     return ans ;

    }
};