class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt=0, extra=0;
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                
                if(grid[i][j] == 1) {
                    cnt++;
                
                    if(i != 0 && grid[i-1][j] == 1)
                        extra++;

                    if(j != 0 && grid[i][j-1] == 1)
                        extra++;
                }
                
            }
        }
        
        return (4*cnt)-(2*extra);
    }
};