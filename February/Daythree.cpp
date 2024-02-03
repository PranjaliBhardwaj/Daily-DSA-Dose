/*Given an integer array arr, partition the array into (contiguous) subarrays of length at most k. After partitioning, each subarray has their values changed to become the maximum value of that subarray.

Return the largest sum of the given array after partitioning. Test cases are generated so that the answer fits in a 32-bit integer.*/


class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n, -1);

        return helper(0, arr, k, dp);
    }

private:
    int helper(int ind, vector<int>& num, int k, vector<int>& dp) {
        int n = num.size();
        if(ind == n) return 0;
        if(dp[ind] != -1) {
            return dp[ind];
        }

        int len = 0;
        int maxi = INT_MIN;
        int maxAns = INT_MIN;

        for(int j=ind; j<min(ind+k, n); j++) {
            len++;
            maxi = max(maxi, num[j]);
            int sum = len * maxi + helper(j+1, num, k, dp);
            maxAns = max(maxAns, sum);
        }
        return dp[ind]=maxAns;
    }
};
