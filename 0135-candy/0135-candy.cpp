class Solution {
public:
    int candy(vector<int>& ratings) {
    int n = ratings.size();
    int x = 0 ;
    int i = 1 , ans = 0 ;
    vector<int>v(20001,1);
    while(i < n)
    {
      if(ratings[i] - ratings[i - 1] > 0)
      {
        v[i] =  1 + v[i - 1];
        x = 1 ;
      }
      else{
        if(x == 1 and ratings[i] < ratings[i-1])
        {
          v[i-1]--;
          x = 0 ;
        }
       
      }
      i++;
    }  
    i = n - 2 ;
    while(i >= 0)
    {

        if(ratings[i] > ratings[i+1])
        {
            v[i] = 1 + max(v[i], v[i+1]);
        }
        i--;
    }
    for(int i = 0 ; i < n ; i++)
    {
        ans += v[i];
    }
    return ans ;
    }
};