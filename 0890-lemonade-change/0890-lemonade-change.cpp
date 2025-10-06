class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    int n = bills.size(), x = 0 , y = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
      if(bills[i] == 5)x++;
      else if(bills[i] == 10){
        y++;
        x--;
      }else{
        if(y){
            y--;
            x--;
        }else x -= 3 ;
      }
      if(y < 0 or x < 0) return false ;
    }    
    return true ;
    }
};