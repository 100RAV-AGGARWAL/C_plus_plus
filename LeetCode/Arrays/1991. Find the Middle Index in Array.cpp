class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=0, curr=0;
        
        for(auto i : nums) total+=i;
        
        for(int i=0; i<nums.size(); i++) {
            int temp = total - curr - nums[i];
            
            if(curr == temp) return i;
            else curr+=nums[i];
        }
        
        return -1;
    }
};