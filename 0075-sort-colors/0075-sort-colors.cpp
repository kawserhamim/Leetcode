class Solution {
public:
    void sort(vector<int> &v, int l, int r, int mid)
    {
        int i = l , j = mid + 1 ;
        vector<int> hamim, ans ;
        while(i <= mid and j <= r)
        {
          if(v[i] <= v[j])hamim.push_back(v[i++]);
          else hamim.push_back(v[j++]);
        }
        while(i <= mid)hamim.push_back(v[i++]);
        while(j <= r) hamim.push_back(v[j++]);
        for(int k = l ; k <= r ; k++)
        {
            v[k] = hamim[k - l];
        }
    }
    void merge(vector<int> &v, int l , int r)
    {
      if(l >= r) return ;
      int mid = (l + r) / 2 ;
      merge(v, l ,  mid);
      merge(v, mid + 1 , r);

      sort(v, l , r, mid); 
    }
    void sortColors(vector<int>& nums) {
    merge(nums, 0 , nums.size()-1 );    
    }
};