class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        if(n%2==0)n -=1 ;
        for(int i=0; i <= n/2; i++)
        {
           swap(s[i],s[s.size()-1-i]); 
        }
    }
};