class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int st=0, en=nums.size()-1;
        vector<int> ans(en+1);
        
        for(int i=nums.size()-1; i>=0; i--) {
            if(abs(nums[en]) > abs(nums[st])) {
                ans[i] = nums[en] * nums[en];
                en--;
            } else {
                ans[i] = nums[st] * nums[st];
                st++;
            }
        }
        
        return ans;
    }
};