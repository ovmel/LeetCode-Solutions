// URL: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
// Run result: Runtime: 128 ms, faster than 25.00% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
//             Memory Usage: 57.7 MB, less than 100.00% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int start = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (start == -1)
                    start = i;
                else if (i - start <= k)
                    return false;
                
                start = i;
            }
        }
        return true;
    }
};