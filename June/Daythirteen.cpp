#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int loss[100001];
        int xmin=1e6, xmax=0;
        memset(loss, -1, sizeof(loss));
         for (auto& p: matches ) {
            int &x=p[0], &y=p[1];
            if (loss[x]==-1) {
                loss[x]=0;
                xmin=min(xmin, x);
                xmax=max(xmax, x);
            }
            if (loss[y]<=0){
                loss[y]=1;
                xmin=min(xmin, y);
                xmax=max(xmax ,y);
            }
             else loss[y]++;
        }
        vector<vector<int>> ans(2);
        for (int i=xmin; i<=xmax; i++ ){
            if (loss[i]==0) ans[0].push_back(i);
            else if (loss[i]==1)
                ans[1].push_back(i);
         }
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
