class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1; i<s.length(); i+=2) {
            char a = (char)((int)s[i-1] - 48 + (int)s[i]);
            s[i] = a;
        }
        
        return s;
    }
};