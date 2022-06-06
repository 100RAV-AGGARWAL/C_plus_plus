class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0;
        int n = cost.size();
        
        sort(cost.begin(), cost.end(), greater<int>());
        
        for(int i=0; i<n; i++) {
            if( (i+1) % 3 == 0)
                continue;
            
            ans += cost[i];
        }
        
        return ans;
    }
};