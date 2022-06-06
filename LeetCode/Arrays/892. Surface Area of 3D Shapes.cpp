class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans=0;
        
        int m = grid.size();
        int n = grid[0].size();        
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 0)
                    continue;
                
                ans += (grid[i][j] * 6) - ((grid[i][j]-1)*2);
                
                if(i+1<m) {
                    int small = grid[i][j] < grid[i+1][j] ? grid[i][j] : grid[i+1][j];
                    
                    ans -= small*2;
                }
                
                if(j+1<n) {
                    int small = grid[i][j] < grid[i][j+1] ? grid[i][j] : grid[i][j+1];
                    
                    ans -= small*2;
                }
            }
        }
        
        return ans;
    }
};