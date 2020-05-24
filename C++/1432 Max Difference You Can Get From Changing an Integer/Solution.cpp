// URL: https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer/
// Run result: Runtime: 4 ms, faster than 100.00% of C++ online submissions for Max Difference You Can Get From Changing an Integer.
//             Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Max Difference You Can Get From Changing an Integer.
class Solution {
public:
    int maxDiff(int num) {
        int a = num, b = num;
        
        // Get all digits
        vector<int> digits;
        while (num) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());
        
        // Change a
        for (auto digit : digits) {
            if (digit != 9) {
                a = replaceDigits(a, digit, 9);
                break;
            }
        }
        
        /// Change b
        if (digits[0] != 1) 
            b = replaceDigits(b, digits[0], 1);
        else {
            for (int i = 1; i < digits.size(); i++) {
                if (digits[i] != 0 && digits[i] != 1) {
                    b = replaceDigits(b, digits[i], 0);
                    break;
                }
            }
        }
        return a - b;
    }
private:
    int replaceDigits(int num, int x, int y) {
        if (num == 0)
            return 0;

        int digit = num % 10;
        if (digit == x)
            digit = y;

        return replaceDigits(num / 10, x, y) * 10 + digit;
    }
};