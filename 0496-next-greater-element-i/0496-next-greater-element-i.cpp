class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int>a(10002,-1);
    stack<int>st;
    int n = nums2.size() - 1 ;
    for(int i = n ; i >= 0  ; i--)
    {
       while(st.size() and nums2[i]>=st.top())
       {
         st.pop();
         
       }
       if(st.size())
       {
         a[nums2[i]] = st.top();
       }
         st.push(nums2[i]);
       
    }
    vector<int>ans;
    for(int i = 0 ; i < nums1.size() ; i++)
    {
      ans.push_back(a[nums1[i]]);
    }
    return ans ;
    }
};