class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Iterate Through Starting Points
        for (int start = 0; start < n - 1; start++) {
            // Step 2: Expand the Subarray
            for (int end = start + 1; end < n; end++) {
                // Step 3: Calculate the Sum
                int subarraySum = 0;
                for (int i = start; i <= end; i++) {
                    subarraySum += nums[i];
                }
                
                // Step 4: Check if the Sum is a Multiple of k
                if (subarraySum == 0 && k == 0) { // Handling special case where k is 0
                    return true;
                }
                if (k != 0 && subarraySum % k == 0) {
                    return true;
                }
            }
        }
        
        // Step 5: Return the Result
        return false;
    }
};
