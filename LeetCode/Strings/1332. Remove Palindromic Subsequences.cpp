class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length() == 0)
            return 0;
        
        int st = 0, e = s.length()-1;
        
        while(st < e) {
            if(s[st] == s[e]) {
                st++;
                e--;
            } else {
                return 2;
            }
        }
        
        return 1;
    }
};