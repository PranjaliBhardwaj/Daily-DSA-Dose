/*You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.*/

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size(), ones=count(s.begin(), s.end(), '1'), zeros=n-ones;
        string ans=string(ones-1, '1')+string(zeros, '0')+string(1,'1');
        return ans;
    }
};
