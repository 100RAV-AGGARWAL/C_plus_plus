class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int minDiff = INT_MAX;
        sort(nums.begin(), nums.end());
        int i=0, j=0;
        
        int maxi = nums[k-1], mini = nums[0];
        j=k;
        
        int result = maxi - mini;
        
        while(j<nums.size()) {
            maxi = nums[j];
            i++;
            mini = nums[i];
            j++;
            
            result = min(result, maxi-mini);
        }
        
        return result;
    }
};