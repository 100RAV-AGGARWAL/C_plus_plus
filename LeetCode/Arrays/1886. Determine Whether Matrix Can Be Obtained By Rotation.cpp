class Solution {
public:
    void rotate(vector<vector<int>> & mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i=0; i<m; i++) {
            for(int j=i+1; j<n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        for(int i=0; i<m; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target) {
            return true;
        }
        
        int i = 3;
        while(i--) {
            rotate(mat);
            if(mat == target) {
                return true;
            }
        }
        
        return false;
    }
};