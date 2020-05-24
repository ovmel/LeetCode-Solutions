// URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Run result: Runtime: 0 ms, faster than 100.00% of Rust online submissions for Kids With the Greatest Number of Candies.
//             Memory Usage: 2 MB, less than 100.00% of Rust online submissions for Kids With the Greatest Number of Candies.
impl Solution {
    pub fn kids_with_candies(candies: Vec<i32>, extra_candies: i32) -> Vec<bool> {
        let mut ret: Vec<bool> = Vec::new();
        let max_candies = candies.iter().max().unwrap();
        for v in candies.iter() {
            if v + extra_candies >= *max_candies {
                ret.push(true);
            } else {
                ret.push(false);
            }
        }
        return ret
    }
}