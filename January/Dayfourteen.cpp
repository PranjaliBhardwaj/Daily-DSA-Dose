/* Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise. */

class Solution {
public:
    bool closeStrings(string word1, string word2) {
       if(word1.size() != word2.size()) return false;

        map<char,int> mp1;
        for(auto it:word1)  mp1[it]++;
        
        map<char,int> mp2;
        for(auto it:word2)  mp2[it]++;

        string UniqueWord1,occUniqueWord1;
        string UniqueWord2,occUniqueWord2;
        
        for(auto it:mp1)
        {
            UniqueWord1+=it.first;
            occUniqueWord1+=to_string(it.second);
        }
        for(auto it:mp2)
        {
            UniqueWord2+=it.first;
            occUniqueWord2+=to_string(it.second);
        }

        if(UniqueWord1!=UniqueWord2)  return false;
        sort(occUniqueWord1.begin(),occUniqueWord1.end());
        sort(occUniqueWord2.begin(),occUniqueWord2.end());
        if(occUniqueWord1 != occUniqueWord2) return false;
        return true;
    }
};
