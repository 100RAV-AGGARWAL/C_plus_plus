class Solution {
public:
    vector<int> diStringMatch(string s) {
        int Min = 0, Max = s.length();
        vector<int> ans;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'I') {
                ans.push_back(Min);
                Min++;
                
                if(i == s.length()-1) ans.push_back(Max);
            }
            else {
                ans.push_back(Max);
                Max--;
                
                if(i == s.length()-1) ans.push_back(Min);
            }
        }
        
        return ans;
    }
};