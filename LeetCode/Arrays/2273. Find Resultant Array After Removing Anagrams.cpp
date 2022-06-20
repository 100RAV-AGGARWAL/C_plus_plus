class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        
        ans.push_back(words[0]);
        string prev = words[0];
        sort(prev.begin(), prev.end());
        
        for(int i=1; i<n; i++) {
            string s1 = words[i];
            
            sort(s1.begin(), s1.end());
            
            if(s1 != prev) {
                ans.push_back(words[i]);
                prev = s1;
            }
        }
        
        return ans;
    }
};