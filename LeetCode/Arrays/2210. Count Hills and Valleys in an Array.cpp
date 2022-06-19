class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt=0, n=nums.size();
        
        int i=1, j=i+1;
        
        while(i<n-1 && j<n) {
            
            while(nums[i] == nums[j] && j<n-1) {
                j++;
            }
            
            if(nums[i]>nums[i-1] && nums[i]>nums[j]) cnt++;
            if(nums[i]<nums[i-1] && nums[i]<nums[j]) cnt++;
            
            i=j;
            j=i+1;
        }
        
        return cnt;
    }
};