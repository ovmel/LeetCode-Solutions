// URL: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
// Run result: Runtime: 56 ms, faster than 75.00% of C++ online submissions for Maximum Number of Vowels in a Substring of Given Length.
//             Memory Usage: 10 MB, less than 100.00% of C++ online submissions for Maximum Number of Vowels in a Substring of Given Length.
class Solution {
public:
    int maxVowels(string s, int k) {
        int maxSubstrLen = 0, curLen = 0;
        int i = 0;
        while (i < s.size()) {
            if (i >= k) {
                if (isVowel(s[i - k]))
                    curLen--;
            }
            if (isVowel(s[i++]))
                curLen++;
            maxSubstrLen = max(maxSubstrLen, curLen);
        }
        return maxSubstrLen;
    }
private:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
};