/* Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is 
an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. '0' means the cell is empty, while'1' means the cell has a security device. */
class Solution {
public:
    int numberOfBeams(std::vector<std::string>& bank) {
        int prevRowCount = 0;
        int total = 0;

        for (const std::string& row : bank) {
            int curRowCount = calc(row);
            if (curRowCount == 0)
                continue;

            total += curRowCount * prevRowCount;
            prevRowCount = curRowCount;
        }
        return total;
    }

private:
    int calc(const std::string& s) {
        int count = 0;
        for (char c : s)
            count += c - '0';

        return count;
    }
};
