class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    int n = hand.size();
        int k = groupSize;
        if(n % k)return false ;
        map<int,int>mp; 
        for(int j : hand){
            mp[j]++;
        }        
        for(auto h : mp)
        {
            int x = h.first ;
            int y = h.second ;
            if(y==0)continue ;
            for(int i = 0 ; i < k ; i++)
            {
              int z = i + x ;
              if(mp[z]<y)return false ;
              mp[z] -=  y ;
            }
        }
        return true ;
    }
};