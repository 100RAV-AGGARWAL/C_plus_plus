class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s_new = s;
        
        for(int i=0; i<s.length(); i++) {
            s_new[indices[i]] = s[i];
        }
        
        return s_new;
    }
};