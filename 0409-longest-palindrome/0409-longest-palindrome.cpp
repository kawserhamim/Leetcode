class Solution {
public:
    int longestPalindrome(string s) {
 unordered_map<char,int>mp; int best=0;
for (long i = 0; i < s.size(); i++)
{
  mp[s[i]]++;
}
  set<char>st(s.begin(),s.end());
  int x=0, sum=0;
for(auto it : st)
{
  if(mp[it]%2==0)sum+=mp[it];
  else 
  {
  x++;
  sum+=(mp[it]-1);
  }
  
}
   if(!x)
   {return sum ;}
   return sum+1;   
    }
};