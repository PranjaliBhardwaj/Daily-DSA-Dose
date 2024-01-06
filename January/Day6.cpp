/* We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time X you will be able to start another job that starts at time X. */
class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        const int n = startTime.size();
        vector<vector<int>> jobs(n);
        for (int i = 0; i < n; i++) jobs[i] = {endTime[i], startTime[i], profit[i]};
        sort(jobs.begin(), jobs.end());
             map<int, int> dp = {{0, 0}};
        for (auto& job : jobs) {
            int profit = prev(dp.upper_bound(job[1]))->second + job[2];
            if (profit > dp.rbegin()->second) dp[job[0]] = profit;
        }
        return dp.rbegin()->second;
    }
};
