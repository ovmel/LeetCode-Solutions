// URL: https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer/
// Run result: Runtime: 24 ms, faster than 66.67% of Python3 online submissions for Max Difference You Can Get From Changing an Integer.
//             Memory Usage: 13.9 MB, less than 100.00% of Python3 online submissions for Max Difference You Can Get From Changing an Integer.
class Solution:
    def maxDiff(self, num: int) -> int:
        a = str(num)
        b = str(num)
        for s_digit in a:
            if s_digit != "9":
                a = a.replace(s_digit, "9")
                break
        if b[0] != "1":
            b = b.replace(b[0], "1")
        else:
            for digit in b[1:len(b)]:
                if digit not in "01":
                    b = b.replace(digit, "0")
                    break
        return int(a) - int(b)