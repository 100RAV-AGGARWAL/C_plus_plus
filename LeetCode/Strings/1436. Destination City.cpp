class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> A, B;
        
        for(auto path : paths) {
            A.push_back(path[0]);
            B.push_back(path[1]);
        }
        
        for(auto i : B) {
            if(find(A.begin(), A.end(), i) == A.end())
                return i;
        }
        
        return "";
    }
};