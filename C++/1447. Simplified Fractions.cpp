// URL: https://leetcode.com/problems/simplified-fractions/
// Run resuls: Runtime: 96 ms, faster than 100.00% of C++ online submissions for Simplified Fractions.
//             Memory Usage: 21.9 MB, less than 100.00% of C++ online submissions for Simplified Fractions.

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> vRes {};
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (__gcd(i, j) == 1) {
                    vRes.push_back(to_string(i) + "/" + to_string(j));
                }
            }
        }
        return vRes;
    }
};