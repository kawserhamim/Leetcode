class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0, y = 0, z = 0;
        
     
        for(int num : nums) {
            if(num == 0) x++;
            else if(num == 1) y++;
            else z++;
        }
        
        int i = 0;
        while(x--) nums[i++] = 0;
        while(y--) nums[i++] = 1;
        while(z--) nums[i++] = 2;
    }
};
