class Solution {
public:
    int countWords(string s) {
        int words = 1;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                words++;
            }
        }
        return words;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxW = 0;
        for(int i=0; i<sentences.size(); i++) {
            maxW = max(maxW, countWords(sentences[i]));            
        }
        return maxW;
    }
};