class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int diff=0, ans=0;
        
        for(auto i : nums) {
            diff += i;
            ans = min(ans, diff);
        }
        
        return 1-ans;
    }
};