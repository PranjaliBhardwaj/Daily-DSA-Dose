/*You are given an integer array nums of size n and a positive integer k.

Divide the array into one or more arrays of size 3 satisfying the following conditions:

Each element of nums should be in exactly one array.
The difference between any two elements in one array is less than or equal to k.
Return a 2D array containing all the arrays. If it is impossible to satisfy the conditions, return an empty array. And if there are multiple answers, return any of them.*/

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        int m =n/3;
        vector<vector<int>> ans(m);
        vector<vector<int>> invalid;
        sort(nums.begin(),nums.end());
        int index=0;
        int count=1;
        int dif=0;
        ans[index].push_back(nums[0]);

        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1] + dif)>k) return invalid;
            dif+=nums[i]-nums[i-1];
            ans[index].push_back(nums[i]);
            count++;
            if(count==3 && i!=n-1){
                count=0;
                index++;
                dif=0;
                i++;
                ans[index].push_back(nums[i]);
                count++;
            }
        }

        return ans;

    }
};
