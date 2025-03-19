class Solution {
public:
    int characterReplacement(string s, int k) {
    int n = s.size();
    int ans = 0 ;
    for(char a = 'A' ; a <= 'Z' ; a++)
    {
        int i = 0, j = 0 , x = 0 ;
        while(i < n)
        {
            if(s[i] != a)
            {
              x++;
            }
            while(x > k)
            {
                if(s[j] != a)
                {
                    x--;
                }
                j++;
            }
            ans = max(ans,i-j+1);
            i++;
        }
    }
    return ans ;
    }
};