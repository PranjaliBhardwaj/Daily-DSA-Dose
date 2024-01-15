/* You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:

You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.  */

class Solution {
public:
    map<int,int>mp1;
    map<int,int>mp2;
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        for(int i=0;i<matches.size();i++)
        {
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        vector<vector<int>>ans;
        vector<int>temp1;
        for(auto it: mp1)
        {
            if(mp2.find(it.first)==mp2.end()) 
            {
                temp1.push_back(it.first);
            }
//if find function finds the value then it return iterator refering to end of map so if it = returns mp2.end() then our value doesn't exist in mp2 and we add it in list 1(temp1).
        }
        ans.push_back(temp1);
        vector<int>temp2;
        for(auto it: mp2)
        {
// players with only single loss
            if(it.second==1)
            {
                temp2.push_back(it.first);
            }
        }
        ans.push_back(temp2);
        return ans;
    }
};
