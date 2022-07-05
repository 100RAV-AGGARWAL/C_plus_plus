class Solution {
public:
    void reverse(string &s, int start, int end) {
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    
    string reverseWords(string s) {
        int start=0;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                reverse(s, start, i-1);
                start = i+1;
            }
        }
        
        reverse(s, start, s.length()-1);
        
        return s;
    }
};