class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int r=0, c=0;
        vector<vector<int>> ans(m, vector<int>(n));
        
        if(original.size() != (m*n)) return {};
        
        for(int i=0; i<original.size(); i++) {
            if(c>=n) {
                r++;
                c=0;
            }
            
            ans[r][c] = original[i];
            c++;
        }
        
        return ans;
    }
};