class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        int n = indices.size();
        
        for(int i=0; i<n; i++) {
            s[indices[i]] = ans[i];
        }
        
        return s;
    }
};