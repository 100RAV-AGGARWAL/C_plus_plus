class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<bool> N(n, false);
        vector<bool> M(m, false);
        
        for(int i=0; i<indices.size(); i++) {
            N[indices[i][0]] = N[indices[i][0]]^true;
            M[indices[i][1]] = M[indices[i][1]]^true;
        }
        
        int row=0, col=0;
        
        for(int i=0; i<n; i++) {
            if(N[i]) row++;
        }
        
        for(int i=0; i<m; i++) {
            if(M[i]) col++;
        }
        
        return row*m + col*n - 2*row*col;
    }
};

