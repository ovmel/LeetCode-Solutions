// URL: https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
// Run result: Runtime: 112 ms, faster than 16.67% of C++ online submissions for Count Triplets That Can Form Two Arrays of // Equal XOR.
            Memory Usage: 7.6 MB, less than 100.00% of C++ online submissions for Count Triplets That Can Form Two Arrays of Equal XOR.
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            int a = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                a ^= arr[j];
                int b = arr[j];
                for (int k = j; k < arr.size(); k++) {
                    b ^= arr[k];
                    if (a == b) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};