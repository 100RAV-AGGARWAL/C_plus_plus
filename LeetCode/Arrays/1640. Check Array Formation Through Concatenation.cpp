class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<bool> mark(pieces.size(), false);
        
        int i = 0;
        while(i < arr.size()) {
            bool found = false;
            
            for(int j=0; j<pieces.size(); j++) {
                if(!mark[j] && arr[i] == pieces[j][0]) {
                    for(int k=0; k<pieces[j].size(); k++, i++) {
                        if(arr[i] != pieces[j][k]) {
                            return false;
                        }
                    }
                    mark[j] = true;
                    found = true;
                }
            }
            
            if(!found) return false;
        }
        
        return true;
    }
};