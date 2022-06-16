class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> ans;
        
        int start=*rounds.begin();
        int end=*rounds.rbegin();
        
        if(start < end) {
            for(int i=start; i<=end; i++) 
                ans.push_back(i);
        } else if(start > end) {
            for(int i=1; i<=end; i++) 
                ans.push_back(i);
            for(int i=start; i<=n; i++) 
                ans.push_back(i);
        } else {
            ans.push_back(start);
        }
        
        return ans;
    }
};