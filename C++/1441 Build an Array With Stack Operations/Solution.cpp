// URL: https://leetcode.com/problems/build-an-array-with-stack-operations/
/  Run result: Runtime: 0 ms, faster than 100.00% of C++ online submissions for Build an Array With Stack Operations.
//             Memory Usage: 7.8 MB, less than 100.00% of C++ online submissions for Build an Array With Stack Operations.
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vRet {};
        for (int i = 1, cur = 0; cur < target.size(); i++, cur++) {
            while (i < target[cur]) {
                vRet.push_back("Push");
                vRet.push_back("Pop");
                i++;
            }
            vRet.push_back("Push");
        }
        return vRet;
    }
};