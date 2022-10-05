class Solution {
public:
    int fib (int n){
        vector <int> dp(n+1,-1);
        return dp_fib(n, dp);
    }
    int dp_fib(int n,vector<int> &dp) {
        if(n<=1)
            return n;
        
        if(dp[n]!=-1) return dp[n];
        
        return dp[n]=dp_fib(n-1,dp)+dp_fib(n-2,dp);
       
    }
};