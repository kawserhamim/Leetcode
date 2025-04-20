class Solution {
public:
    bool isValid(string s) {
    stack<char>st;
    int n = s.size();  
    for(int i = 0 ;i < n ; i++)
    {
       if(s[i] == '(' or s[i] == '{' or s[i] =='[')
       {
         st.push(s[i]);
       }else{
        if(st.size())
        {
        if(s[i] == ')' and st.top()!='(')return false ;
        if(s[i]=='}' and st.top()!='{')return false ;
        if(s[i] == ']' and st.top()!='[')return false ;
        st.pop();
       }else return false ;
       }
    } 
    if(st.size())return false ;
    else return true ; 
    }
};