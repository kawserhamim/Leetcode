class Solution {
public:
    int dp[101];
    int find_possible_ways(int idx, string &s){
        int n = s.size();
        // first start with the base case i.e.,
        if(idx>=n) return 1;
        if(s[idx] == '0') return 0;
        if(dp[idx]!=-1) return dp[idx];
        // we can take the first idx then call for rest of the string
        // else check if curr idx val <=2 then we can group them.
        int ans = 0;
        if(idx+2<=n && s[idx] =='2' && s[idx+1]<='6'){
            ans  += find_possible_ways(idx+1,s);
            ans  += find_possible_ways(idx+2, s);
        }else if(idx+2<=n && s[idx] == '1'){
            ans  += find_possible_ways(idx+1,s);
            ans  += find_possible_ways(idx+2, s);
        }else{
            ans  += find_possible_ways(idx+1,s);
            // ans  += find_possible_ways(idx+2, s);
        }
        return dp[idx] = ans;
    }
    int numDecodings(string s) {
        /*
        we have given a string and that is encoded and 
        now we have find the number of ways the message can be encoded.
        int n = s.size();
        first start with the base case i.e.,

        if(n == 0 || s[0] == '0') return 0;

        we can take the first idx then call for rest of the string
        else check if curr idx val <=2 then we can group them.
        int ans = 0;
        if(s[idx] <='2'){
            ans  += find_possible_ways(idx+1,s);
            ans +=  find_possible_ways(idx+2, s);
        }else{
            ans  += find_possible_ways(idx+1,s);
        }
        return ans;
        */
        memset(dp,-1,sizeof(dp));
        return find_possible_ways(0, s);
    }
};