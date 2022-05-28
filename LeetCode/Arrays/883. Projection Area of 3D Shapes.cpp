class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int x=0,y=0,z=0, k=0;
        int n = grid.size();
        
        vector<vector<int>> temp = grid;
        
        x = n*n;
        
        for(int i=0; i<n; i++) {
            sort(temp[i].begin(), temp[i].end());
            
            z += temp[i][n-1];
        }
        
        for(int i=0; i<n; i++) {
            int y_max = 0;
            for(int j=0; j<n; j++) {
                y_max = max(y_max, grid[j][i]);
                if(grid[j][i] == 0) k++;
            }
            
            y += y_max;
        }
        
        return x+y+z-k;
    }
};