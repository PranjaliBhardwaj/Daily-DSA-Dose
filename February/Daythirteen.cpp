/*Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.*/
class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {
        std::string ans = "";
        for (const auto& word : words) {
            int j = 0, k = word.length() - 1;
            while (word[j] == word[k]) {
                if (j >= k) {
                    ans = word;
                    return ans;
                }
                j++;
                k--;
            }
        }
        return ans;
    }
};
