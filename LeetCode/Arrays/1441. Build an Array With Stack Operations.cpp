class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        vector<int> temp;
        
        int start=1;
        
        for(int i=0; i<target.size(); i++) {
            if(target[i] == start) {
                ans.push_back("Push");
                start++;
            } else {
                for(int j=start; j<target[i]; j++) {
                    ans.push_back("Push");
                    ans.push_back("Pop");
                }
                ans.push_back("Push");
                start = target[i]+1;
            }
        }
        
        return ans;
    }
};