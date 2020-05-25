# URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
# Run result: Runtime: 56 ms, faster than 33.33% of Python3 online submissions for Kids With the Greatest Number of Candies.
#             Memory Usage: 13.9 MB, less than 100.00% of Python3 online submissions for Kids With the Greatest Number of Candies.
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        ret_list = [False] * len(candies)
        max_candies = max(candies)
        for i in range(len(candies)):
            if candies[i] + extraCandies >= max_candies:
                ret_list[i] = True
        return ret_list