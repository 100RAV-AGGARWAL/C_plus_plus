class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod=0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) return 0;
            
            if(nums[i] < 0)
                prod++;
            else
                break;
        }
        
        if(prod % 2 == 0) return 1;
        else return -1;
    }
};