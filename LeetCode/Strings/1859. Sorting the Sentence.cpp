class Solution {
public:
    string sortSentence(string s) {
        map<int, string> m;
        int len=1;
        string word="", ans="";
        
        int i;
        for(i=0; i<s.length()-1; i++) {
            if(s[i+1] == ' ') {
                len++;
                m[s[i] - '0'] = word;
                word="";
                i++;
            } else {
                word += s[i];
            }
        }
        
        m[s[i]-'0'] = word;
        
        for(i=1; i<=len; i++) {
            ans += m[i];
            
            if(i+1 <= len)
                ans += ' ';
        }
        
        return ans;
    }
};