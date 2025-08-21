class Solution {
public:
  bool isSubsequence(string s, string t) {
  map<char,int>mp;
  bool ans = false ;
  long  j = 0;
  if(s=="")ans = true ;
for (long i = 0; i < t.size() ; i++)
{
   if(s[j]==t[i])
   {
    if(j==s.size()-1){
        ans=true;
        break;
    }
    else j++;
   }
}
  
   return ans ;
  
}
};