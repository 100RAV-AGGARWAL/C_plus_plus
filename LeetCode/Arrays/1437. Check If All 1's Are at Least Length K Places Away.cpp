class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> v;
        int prev=-1, curr=-1;
        
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] == 1){
                if(prev == -1) {
                    prev=i;
                    curr=i;
                } else {
                    curr=i;
                    
                    if(curr-prev-1 < k)
                        return false;
                    
                    prev=i;
                }
            }
        }
        
        return true;
    }
    
};