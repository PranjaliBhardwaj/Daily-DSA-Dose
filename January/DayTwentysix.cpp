/*There is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball.

Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7.*/

 

class Solution {
private:
    const int mod=int(1e9+7);
    vector<pair<int,int>> dirs={{-1,0},{0,-1},{1,0},{0,1}};
    int dp[51][51][51];
    int f(int i,int j,int m,int n,int remMoves) {
        //base cases
        if(i==m || j==n || i==-1 || j==-1) return 1;
        if(remMoves==0) return 0;
        if(dp[i][j][remMoves]!=-1) return dp[i][j][remMoves];

        int ans=0;
        for(auto [dx,dy] :dirs) {
            ans+=f(i+dx,j+dy,m,n,remMoves-1);
            ans%=mod;
        }
        return dp[i][j][remMoves]=ans; 
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return f(startRow,startColumn,m,n,maxMove);
    }
};
