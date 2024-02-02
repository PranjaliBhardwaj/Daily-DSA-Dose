/*An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.*/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;

        for(int digit=1; digit<9; digit++){
            int num = digit;
            int nextDigit = num + 1;

            while(num <= high && nextDigit <= 9){
                num = (num * 10) + nextDigit;
                if(num >= low && num <= high) result.push_back(num);

                nextDigit++;
            }
        }

        std::sort(result.begin(), result.end());
        return result;
    }
};
