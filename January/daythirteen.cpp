/*You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering. */

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freqS(26, 0);
        vector<int> freqT(26, 0);
      
        for (int i = 0; i < s.length(); i++) {
            freqS[s[i] - 'a']++; // Increment the frequency of the current character in string s
            freqT[t[i] - 'a']++; // Increment the frequency of the current character in string t
        }

        // Variable to store the count of steps needed to make the strings anagrams
        int count = 0;

        // Compare the frequency of each character in t with that in s
        for (int i = 0; i < 26; i++) {
            if (freqT[i] < freqS[i]) {
                // If frequency in t is less than that in s, add the difference to the count
                count += freqS[i] - freqT[i];
            }
        }

        // Return the total count, representing the minimum steps needed
        return count;
    }
};

 
