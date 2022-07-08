class Solution {
public:
    bool isPrefix(string s, string p) {
        if(p.length() > s.length())
            return false;
        
        for(int i=0; i<p.length(); i++) {
            if(p[i] != s[i])
                return false;
        }
        
        return true;
    }
    
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        
        for(auto word : words) {
            if(isPrefix(word, pref) == true)
                cnt++;
        }
        
        return cnt;
    }
};