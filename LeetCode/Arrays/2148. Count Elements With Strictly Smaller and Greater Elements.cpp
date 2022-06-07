class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=nums.size();
        
        if(nums[0] == nums[ans-1]) return 0;
        
        int lowCnt=1, highCnt=1;
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1])
                lowCnt++;
            else
                break;
        }
        
        for(int i=nums.size()-1; i>=0; i--) {
            if(nums[i] == nums[i-1])
                highCnt++;
            else
                break;
        }
        
        return ans-lowCnt-highCnt;
    }
};