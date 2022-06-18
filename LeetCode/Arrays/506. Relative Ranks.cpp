class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {        
        map<int, int> m;
        int n = score.size();
        vector<string> ans(n);
        
        for(int i=0; i<n; i++) {
            m[score[i]] = i;        
        }
        
        sort(score.begin(), score.end(), greater<int>());
        
        ans[m[score[0]]] = "Gold Medal";
        ans[m[score[1]]] = "Silver Medal";
        ans[m[score[2]]] = "Bronze Medal";
        
        for(int i=3; i<n; i++) {
            ans[m[score[i]]] = to_string(i+1);
        }
        
        return ans;
    }
};