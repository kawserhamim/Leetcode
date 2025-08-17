class Solution {
public:
    string largestOddNumber(string num) {
        string s = num;
    int n = s.size(), j = -1 ;
    for(int i =  0  ; i < n ; i++)
    {
        int b = s[i] - '0';
        if(b % 2)j = i ;
    }   
    string ans = "";
    for(int i=0;i<=j;i++)
    {
        ans += s[i];
    } 
    return ans ;
    }
};