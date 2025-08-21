class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
 long n=arr.size();
 long pre[n];
 for (long i = 0; i < n ; i++)
 {
  if(i==0)pre[i]=arr[i];
  else pre[i]=arr[i]^pre[i-1];
 }
 vector<int> ret;
  for (long i = 0; i < queries.size(); i++)
 {
  long x=queries[i][0];
  long y=queries[i][1];
  if(x==0)ret.push_back(pre[y]);
  else ret.push_back(pre[x-1]^pre[y]);
  
 }
   return ret;   
    }
};