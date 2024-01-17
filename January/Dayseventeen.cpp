//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency;

        for(int num : arr) // Store element and its frequency
            frequency[num]++;

        // store the frequency 
        unordered_set<int> storage;
        for(auto key : frequency)
            storage.insert(key.second);

        // True if we get n different frequency for n different numbers
        return frequency.size() == storage.size();
    }
};
