// URL: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
// Run result: Runtime: 152 ms, faster than 100.00% of C# online submissions for Number of Students Doing Homework at a Given Time.
/              Memory Usage: 24.6 MB, less than 100.00% of C# online submissions for Number of Students Doing Homework at a Given Time.
public class Solution {
    public int BusyStudent(int[] startTime, int[] endTime, int queryTime) {
        int count = 0;
        for (int i = 0; i < startTime.Length; i++) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                count++;
        }
        return count;
    }
}