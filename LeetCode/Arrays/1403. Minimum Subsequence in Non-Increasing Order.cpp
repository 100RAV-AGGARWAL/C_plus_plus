class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0, subSum=0;
        vector<int> ans;
        
        for(auto i : nums) {
            sum += i;
        }
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        for(auto i : nums) {
            subSum += i;
            sum -= i;
            
            ans.push_back(i);
            if(subSum > sum) break;
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        
        return ans;
    }
};