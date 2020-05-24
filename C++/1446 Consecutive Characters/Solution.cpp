// URL: https://leetcode.com/problems/consecutive-characters/
// Run results: Runtime: 8 ms, faster than 66.67% of C++ online submissions for Consecutive Characters.
//              Memory Usage: 6.8 MB, less than 100.00% of C++ online submissions for Consecutive Characters.
class Solution {
public:
    int maxPower(string s) {        
        int maxP = 1, curP = 1;
        char curChar = s[0];
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == curChar)
                curP++;
            else {
                curChar = s[i];
                curP = 1;
            }
            maxP = max(maxP, curP);
        }
        return maxP;
    }
};