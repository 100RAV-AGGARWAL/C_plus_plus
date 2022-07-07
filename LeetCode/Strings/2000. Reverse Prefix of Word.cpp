class Solution {
public:
    void reverse(string &word, int end) {
        int st = 0;
        while(st < end) {
            swap(word[st], word[end]);
            st++;
            end--;
        }
    }
    
    string reversePrefix(string word, char ch) {
        for(int i=0; i<word.length(); i++) {
            if(word[i] == ch) {
                reverse(word, i);
                break;
            }
        }
        
        return word;
    }
};