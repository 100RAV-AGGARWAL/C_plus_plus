class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int width=0, lines=1;
        
        for(int i=0; i<s.length(); i++) {
            if(width + widths[s[i]-'a'] <= 100) { 
                width += widths[s[i]-'a'];
            } else {
                lines++;
                width=0;
                i--;
            }
        }
        
        vector<int> ans{lines, width};
        return ans;
    }
};