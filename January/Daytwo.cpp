/* You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

The 2D array should contain only the elements of the array nums.
Each row in the 2D array contains distinct integers.
The number of rows in the 2D array should be minimal.
Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.*/
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
        }  

        while(!mp.empty()){
            vector<int> temp;
            for(auto it = mp.begin(); it != mp.end(); ){
                temp.push_back(it->first);
                it->second--;
                if(it->second == 0){
                    it = mp.erase(it);
                } else {
                    ++it;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
/* It iterates through the hashmap repeatedly until it's empty.
Each iteration constructs a new row of the resulting matrix. */
