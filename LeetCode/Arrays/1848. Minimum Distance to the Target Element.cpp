class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> ind;
        int n = nums.size(), left=start, right=start;
        
        if(nums[start] == target) return 0;
        
        while(left>=0 && right<=nums.size())
        {
            if(nums[left]==target)
                return abs(left-start);
            
            if(nums[right]==target)
                return abs(right-start);
            
             if(left>0) left--;
            if(right<nums.size()) right++;
        }
        
        return -1;
    }
};