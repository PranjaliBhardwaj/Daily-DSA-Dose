#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> loss;
        for (auto& p: matches ) {
            int x=p[0], y=p[1];
            if (loss.count(x)==0) loss[x]=0;
            if (loss.count(y)) loss[y]++;
            else loss[y]=1;
        }
        vector<vector<int>> ans(2);
        for (auto [i, f]: loss){
            if (f==0) ans[0].push_back(i);
            else if (f==1)
                ans[1].push_back(i);
         }
        return ans;
    }
};
