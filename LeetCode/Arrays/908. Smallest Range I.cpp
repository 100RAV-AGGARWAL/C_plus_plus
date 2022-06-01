class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size() == 1) return 0;
        
        sort(nums.begin(), nums.end());
        
        if(-nums[0]+nums[nums.size()-1]-(2*k) <= 0) {
            return 0;
        }
        
        return -nums[0]+nums[nums.size()-1]-(2*k);
    }
};