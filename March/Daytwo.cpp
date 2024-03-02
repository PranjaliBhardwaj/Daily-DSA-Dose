/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.*/

 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        transform(nums.begin(), nums.end(), squares.begin(), [](int num) { return num * num; });
        sort(squares.begin(), squares.end());
        return squares;   
    }
};
