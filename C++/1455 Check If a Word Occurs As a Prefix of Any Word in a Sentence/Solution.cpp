// URL: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
// Run result: Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
//             Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = 1;
        stringstream ss(sentence);
        while (ss) {
            string word;
            ss >> word;
            size_t pos = word.find(searchWord);
            if (pos == 0)
                return index;
            index++;
        }
        return -1;
    }
};