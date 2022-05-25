class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int countChips[2] = {0};
        
        for(auto i : position) {
            countChips[i%2]++;
        }
        
        return min(countChips[0], countChips[1]);
    }
};