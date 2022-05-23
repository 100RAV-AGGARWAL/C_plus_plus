class Solution {
public:
    string truncateSentence(string s, int k) {
        int sp = 0;
        string ans;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') sp++;
            
            if(sp < k) {
                ans += s[i];
            } else if(sp == k) {
                break;
            }
        }
        
        return ans;
    }
};