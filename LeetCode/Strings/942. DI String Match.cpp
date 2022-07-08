class Solution {
public:
    vector<int> diStringMatch(string s) {
        int Min=0, Max=s.length();
        vector<int> ans;
        
        for(auto i : s) {
            if(i == 'I')
                ans.push_back(Min++);
            else
                ans.push_back(Max--);
        }
        
        if(s[s.length()-1] == 'D')
            ans.push_back(Min);
        else
            ans.push_back(Max);
        
        return ans;
    }
};