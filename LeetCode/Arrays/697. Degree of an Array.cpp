class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> m;
        int maxF = 0, n=nums.size(), minL=n;
        
        for(int i=0; i<n; i++) {
            m[nums[i]].push_back(i);
            int s =  m[nums[i]].size();
            maxF = max(maxF, s);
        }
        
        for(auto i : m) {
            int size = i.second.size();
            
            if(size == maxF) {
                int len = i.second[size-1] - i.second[0] + 1;
                minL = min(minL, len);
            }
        }
        
        return minL;
        
    }
};