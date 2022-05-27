class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.length()), ind;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == c) ind.push_back(i);
        }
        
        int indSize = ind.size();
        int l=0, r=0;
        
        for(int i=0; i<s.length(); i++) {
            if(i>ind[r]) {
                l = r;
                if(r<indSize-1)
                    r++;
            }
            
            ans[i] = min(abs(ind[l]-i), abs(ind[r]-i));
        }
        
        return ans;
    }
};