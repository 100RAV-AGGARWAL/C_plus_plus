class Solution {
public:
    static bool sortCol(vector<int> v1, vector<int> v2) {
        if(v1[0] < v2[0]) {
            return true;
        } else if(v1[0] == v2[0] && v1[1] < v2[1]){
            return true;
        }
        return false;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans;
        vector<int> ind;
        
        for(int i=0; i<mat.size(); i++) {
            int count1=0;
            for(int j=0; j<mat[0].size(); j++) {
                if(mat[i][j] == 1) count1++;
                else break;
            }
            
            ans.push_back({count1, i});
        }
        
        sort(ans.begin(), ans.end(), sortCol);
        
        for(int i=0; i<k; i++) {
            ind.push_back(ans[i][1]);
        }
        
        return ind;
    }
};