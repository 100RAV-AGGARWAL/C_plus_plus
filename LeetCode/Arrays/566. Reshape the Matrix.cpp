class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        if(m*n != r*c) return mat;
        
        int r1 = 0, c1 = 0;
        
        for(int i=0; i<m; i++) { 
            for(int j=0; j<n; j++) {
                if(c1 >= c) {
                    c1=0;
                    r1++;
                }
                
                ans[r1][c1] = mat[i][j];
                c1++;
            }
        }
        
        return ans;
    }
};