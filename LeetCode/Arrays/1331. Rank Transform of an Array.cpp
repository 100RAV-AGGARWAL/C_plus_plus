class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        
        if(n==0) return {};
        
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        
        unordered_map<int, int> rank;
        vector<int> ans;
        rank[sorted[0]] = 0;
        
        for(int i=1; i<n; i++) {
            if(sorted[i] != sorted[i-1]) {
                rank[sorted[i]] = rank[sorted[i-1]]+1;
            }
        }
        
        for(auto i : arr) {
            ans.push_back(rank[i]+1);
        }
        return ans;
    }
};