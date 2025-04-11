class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int n = numbers.size();
       vector<pair<int,int>>pr;
       vector<int>ans;
       for(int i = 0 ; i < n ; i++)
       {
        pr.push_back({numbers[i],i+1});
       }
       sort(pr.begin(),pr.end());
       int i = 0 , j = n -1 ;
       while(i < j)
       {
         if(pr[i].first + pr[j].first > target)j--;
         else if(pr[i].first + pr[j].first < target)i++;
         else{
            ans.push_back(pr[i].second);
            ans.push_back(pr[j].second);
            break;
         
         }
       }
          return ans ;     
    }
};