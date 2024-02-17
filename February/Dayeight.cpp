/*Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.*/

class Solution {

 int solve(int n, vector<int>&dp)
 {
     if(n==0) return 0;

    if(dp[n]!=-1)
    {
        return dp[n];
    }

     int ans = n;
     for(int i=1;i*i<=n;i++)
     {
         ans = min(ans , solve(n-(i*i),dp)+1);
     }
     return dp[n] = ans;
 
 }

public:
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
          return solve(n,dp);
    }
};
