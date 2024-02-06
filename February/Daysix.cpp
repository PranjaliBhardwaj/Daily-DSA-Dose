/* Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) {
            return {};
        }
        unordered_map<string, vector<string>> map;
        for(const auto& s : strs) {
            string keyStr = s;
            sort(keyStr.begin(), keyStr.end());
            map[keyStr].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};
