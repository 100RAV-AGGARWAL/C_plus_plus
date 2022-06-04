class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        int ans = stones[n-1];
        
        sort(stones.begin(), stones.end());
        
        while(n > 1) {
            ans = stones[n-1] - stones[n-2];
            stones.pop_back();
            stones.pop_back();
            stones.push_back(ans);
            
            sort(stones.begin(), stones.end());
            n = stones.size();
        }
        
        return stones[0];
    }
};