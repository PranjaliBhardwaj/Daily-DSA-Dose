/* You are given a rows x cols matrix grid representing a field of cherries where grid[i][j] represents the number of cherries that you can collect from the (i, j) cell.

You have two robots that can collect cherries for you:

Robot #1 is located at the top-left corner (0, 0), and
Robot #2 is located at the top-right corner (0, cols - 1).
Return the maximum number of cherries collection using both robots by following the rules below:

From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1).
When any robot passes through a cell, It picks up all cherries, and the cell becomes an empty cell.
When both robots stay in the same cell, only one takes the cherries.
Both robots cannot move outside of the grid at any moment.
Both robots should reach the bottom row in grid.*/

class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
        dp[0][0][n-1] = grid[0][0] + grid[0][n-1];

        int ans = 0;
        for(int i = 1; i < m; ++i) {
            for(int j = 0; j < n; ++j) { // robotA
                for(int k = j+1; k < n; ++k) { // robotB
                    for(int x = -1; x <= 1; ++x) { // x and y all possible combinations
                        for(int y = -1; y <= 1; ++y) {
                            int nj = j + x, nk = k + y;
                            if(nj >= 0 && nj < n && nk >= 0 && nk < n) {
                                int prev = dp[i-1][nj][nk];
                                if(prev != -1) {
                                    dp[i][j][k] = max(dp[i][j][k], prev + grid[i][j] + (j != k ? grid[i][k] : 0));
                                }
                            }
                        }
                    }
                    if(ans < dp[i][j][k]) ans = dp[i][j][k];
                }
            }
        }
        
        return ans;
    }
};
