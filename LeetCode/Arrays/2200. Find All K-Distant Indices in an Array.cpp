class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int n = nums.size();
        
        int i=0, j=0;
        
        while(j<n) {
            if(nums[j] == key) {
                if(abs(i-j) <= k && i<n) {
                    ans.push_back(i);
                    i++;
                } else {
                    i>j ? j++ : i++;
                }
            } else {
                j++;
            }
        }
        
        return ans;
    }
};