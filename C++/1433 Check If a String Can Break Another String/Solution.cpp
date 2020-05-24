// URL: https://leetcode.com/problems/check-if-a-string-can-break-another-string/
// Run result: Runtime: 396 ms, faster than 60.00% of C++ online submissions for Check If a String Can Break Another String.
//             Memory Usage: 14 MB, less than 100.00% of C++ online submissions for Check If a String Can Break Another String.
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end()); 
        sort(s2.begin(), s2.end());
        return (canBreak(s1, s2) || canBreak(s2, s1));
    }
private:
    bool canBreak(string s1, string s2) {
        bool bCanBreak = true;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] < s2[i]) {
                bCanBreak = false;
                break;
            }
        }
        return bCanBreak;
    }
};