class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=0, minN = INT_MAX;
        
        for(int i=0; i<nums.size(); i++) {
            minN = min(minN, nums[i]);
            ans = max(ans, nums[i] - minN);
        }
        
        return ans == 0 ? -1 : ans;
    }
};