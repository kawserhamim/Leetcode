class Solution {
public:
    bool canJump(vector<int>& nums) {
    int i = 0 , x =  0 , n = nums.size();
    while(i < n)
    {
        if(i > x)return false ;
        // if(i == n)return true ;
        x = max(x,i+nums[i]);
        i++;
    }
    return true ;
    }
};