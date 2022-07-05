class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        int n = s.length();
        
        for(int i=0; i<n; i++) {
            if(s[i] >= '1' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9' && s[i+2] == '#') {
                int val = (s[i] - '0')*10 + (s[i+1] - '0');
                char c = 'a' + val-1;
                ans += c;
                i += 2;
            } else {
                int val = (s[i] - '0');
                char c = 'a' + val-1;
                ans += c;
            }
        }
        
        return ans;
    }
};