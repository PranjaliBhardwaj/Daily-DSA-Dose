/*Given two strings s and t of lengths m and n respectively, return the minimum window 
substring
 of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.*/

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128,0);
        for (char c : t) {
            map[c]++;
        }

        int counter = t.size(), begin = 0, end = 0, d = INT_MAX, head = 0;
        while (end < s.size()){
            if (map[s[end++]]-- > 0) {
                counter--;
            }
            while (counter == 0) {
                if (end - begin < d) {
                    head = begin;
                    d = end - head;
                }
                if (map[s[begin++]]++ == 0) {
                    counter++;
                }
            }  
        }
        return d == INT_MAX ? "" : s.substr(head, d);
    }
};
