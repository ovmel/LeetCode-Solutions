// URL: https://leetcode.com/problems/destination-city/
// Run result: Runtime: 32 ms, faster than 25.00% of C++ online submissions for Destination City.
//             Memory Usage: 10.2 MB, less than 100.00% of C++ online submissions for Destination City.
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string sRet = "";
        for (int i = 0; i < paths.size(); i++) {
            int countFirst = 0;
            int countSecond = 0;
            string toSearch = paths[i][1];
            for (int j = 0; j < paths.size(); j++) {
                if (paths[j][0] == toSearch)
                    countFirst++;
                if (paths[j][1] == toSearch)
                    countSecond++;
            }
            if (countSecond == 1 && countFirst == 0) {
                sRet = toSearch;
                break;
            }
        }
        return sRet;
    }
};