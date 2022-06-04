class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> rowS(m), colS(n);
        vector<vector<int>> v;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(mat[i][j]) {
                    v.push_back({i,j});
                    rowS[i]++;
                    colS[j]++;
                }
            }
        }
        
        for(int i=0; i<v.size(); i++) {
            if(rowS[v[i][0]] == 1 && colS[v[i][1]] == 1) 
                ans++;
        }
        
        return ans;
    }
};