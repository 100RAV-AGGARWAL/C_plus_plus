class Solution {
public:
    string sortString(string s) {
        vector<int> size(26, 0);
        string str = "";
        int n = s.size();
        
        for(int i=0; i<n; i++) {
            size[s[i] - 'a']++;
        }
        
        while(n) {
            for(int i=0; i<26; i++) {
                if(size[i] > 0) {
                    str += i + 'a';
                    size[i]--;
                    n--;
                }
            }
            
            for(int i=25; i>=0; i--) {
                if(size[i] > 0) {
                    str += i + 'a';
                    size[i]--;
                    n--;
                }
            }
        }
        
        return str;
        
    }
};