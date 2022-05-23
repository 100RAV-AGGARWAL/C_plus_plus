class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);
        int sum = 0;
        
        for(int i=0; i<size; i++) {
            ans[i] = sum + nums[i];
            sum = ans[i];
        }
        return ans;
    }
};