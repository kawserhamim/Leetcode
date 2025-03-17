class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int x = INT_MAX;
    int i = 0 , ans = 0 ;
    while(i < n)
    {
        if(prices[i] < x)x = prices[i];
        else ans = max(ans,prices[i] - x );
        i++;
    } 
    return ans ;
    }
};