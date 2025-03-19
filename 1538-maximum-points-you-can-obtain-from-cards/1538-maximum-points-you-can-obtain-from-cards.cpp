class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = 0 , x = 0 ;
    for(int i = 0 ; i < k ; i++)
    {
        ans += cardPoints[i];
    }
   // if(n == k)return ans;
    for(int i = n - k ; i < n ; i++ )  
    {
        x += cardPoints[i];
    }
    int best = 0 ;
    best= max(ans,x);
    int i = k - 1 , j = n - 1 ;
    int u = 0, z = 0 ;
    while(i >= 0 )
    {
        u += cardPoints[i];
        int g = ans - u ;
        z += cardPoints[j];
      //  int h = x - z ;
        best = max(best,g+z);
        i--; j--;
    }
    return best ;
    }
};