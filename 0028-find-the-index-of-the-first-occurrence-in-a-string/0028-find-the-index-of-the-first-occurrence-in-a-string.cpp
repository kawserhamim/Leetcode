class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    vector<int>v(m, 0);
    int i = 1 , j = 0 , l = 0 ;
    while(i < m )
    {
        if(needle [i] == needle[j])
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

    i = 0 , j = 0 ; int ans = -1;
    while(i < n)
    {
        if(haystack[i] == needle[j])
        {
            i++; 
            j++;
            if(j == m)return ans = i - j  ;
        }else{
           if(j == 0)
           {
             j = 0 ; 
             i++;
           }
           else
           {
              j = v[j-1];
              
           }  
        }
    }
    return ans ;
    }
};