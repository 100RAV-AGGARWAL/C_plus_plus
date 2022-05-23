class Solution {
public:
    static int calcGcd(int n1, int n2) {
        int ans = 1;
        
        for(int i=2; i<=n1; i++) {
            if(n1 % i == 0 && n2 % i == 0) ans = i;
        }
        
        return ans;
    }
    
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        return calcGcd(nums[0], nums[nums.size()-1]);
    }
};