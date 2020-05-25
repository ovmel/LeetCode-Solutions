// URL: https://leetcode.com/problems/rearrange-words-in-a-sentence/
// Run result: Runtime: 160 ms, faster than 25.00% of C++ online submissions for Rearrange Words in a Sentence.
//             Memory Usage: 16.9 MB, less than 100.00% of C++ online submissions for Rearrange Words in a Sentence.
class Solution {
public:
    string arrangeWords(string text) {
        text[0] = tolower(text[0]);
        stringstream ss(text);
        map<int, vector<string>> mWords;
        string word;
        while (getline(ss, word, ' ')) {
            mWords[word.size()].push_back(word);
        }
        
        string sRet;
        for (const auto& wordLength : mWords) {
            for (const auto& w : wordLength.second) {
                sRet += w;
                sRet += " ";
            }
        }
        sRet.pop_back();
        sRet[0] = toupper(sRet[0]);
        return sRet;
    }
};