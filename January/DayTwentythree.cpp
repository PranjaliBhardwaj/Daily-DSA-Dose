/*You are given an array of strings arr. A string s is formed by the concatenation of a subsequence of arr that has unique characters.

Return the maximum possible length of s.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

 */


class Solution {
public:
    int memo(int i, vector<int>& nums, int mask){
        if(i == nums.size()) return 0;
        int pick = INT_MIN, nonPick = INT_MIN;
        if((nums[i] & mask) == 0){
            pick = __builtin_popcount(nums[i]) + memo(i+1,nums, mask | nums[i]);
        }
        nonPick = memo(i+1,nums, mask);
        return max(pick, nonPick);
    }
    int maxLength(vector<string>& arr) {
        vector<int>nums;
        for(string s: arr){
            int n  = 0;
            bool flag = true;
            for(int i = 0; i < s.size(); ++i){
                if((n & (1 << (s[i] - 'a'))) != 0){
                    flag = false;
                    break;
                } 
                n |= (1 << (s[i] - 'a'));
            }
            if(!flag) continue;
            nums.push_back(n);
        }
        return memo(0,nums, 0);
    }
};
