class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0, maxCnt=0, n = nums.size();
        
        for(int i=0; i<n-1; i++) {
            if(nums[i] == 1) {
                cnt++;
                
                if(nums[i] != nums[i+1]) {
                    maxCnt = max(maxCnt, cnt);
                    cnt=0;
                }
            }
        }
        
        if(nums[n-1] == 1) cnt++;
        
        maxCnt = max(maxCnt, cnt);
        
        return maxCnt;
    }
};