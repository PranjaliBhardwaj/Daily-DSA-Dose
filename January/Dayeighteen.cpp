//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
    int dp[46];
public:
    int climbStairs(int n) {
        if(n <= 3) return dp[n] = n;
        if(dp[n] != 0) return dp[n];
        return dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
