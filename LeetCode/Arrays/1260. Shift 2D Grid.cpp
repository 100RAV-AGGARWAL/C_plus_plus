class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& m, int k) {
        int r = m.size(), c = m[0].size();
        
        vector<vector<int>> ans(r, vector<int>(c, 0));
        
        for(int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                
                int newPos = (((i * c) + j) + k) % (r * c); 
                int newRow = newPos / c;
                int newCol = newPos % c;
                ans[newRow][newCol] = m[i][j];
            }
        }
        return ans;
    }
};