class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int open=0, close=0;
        string pattern="";
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '(') {
                open++;
                pattern += s[i];
            } else {
                close++;
                pattern += s[i];
            }
            
            if(open == close) {
                pattern.erase(pattern.begin());
                pattern.erase(pattern.end()-1);
                ans += pattern;
                pattern = "";
            }
        }
        
        return ans;
    }
};