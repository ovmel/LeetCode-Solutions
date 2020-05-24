// URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vRet(candies.size(), false);
        int maxCandies = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies)
                vRet[i] = true;
        }
        return vRet;
    }
};