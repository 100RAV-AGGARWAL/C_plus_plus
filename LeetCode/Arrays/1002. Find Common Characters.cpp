class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> f1(26, INT_MAX);
        
        for(auto i : words) {
            vector<int> f2(26, 0);
            
            for(auto j : i) {
                f2[j-'a']++;
            }
            
            for(int i=0; i<26; i++) {
                f1[i] = min(f1[i], f2[i]);
            }
        }
        
        for(int i=0; i<26; i++) {
            while(f1[i]--) {
                ans.push_back(string(1, i+'a'));
            }
        }
        
        return ans;
    }
};