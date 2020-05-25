// URL: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
// Run result: Runtime: 4 ms, faster than 100.00% of C++ online submissions for Number of Students Doing Homework at a Given Time.
//             Memory Usage: 11 MB, less than 100.00% of C++ online submissions for Number of Students Doing Homework at a Given Time.
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for (int i = 0; i < startTime.size(); i++) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                count++;
        }
        return count;
    }
};