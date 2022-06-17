class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans=0;
        unordered_map<int, int> m;
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) 
                m[nums[i]+nums[j]]++;
            
            for(int k=i+2; k<n; k++) {
                int temp = nums[k]-nums[i+1];
                if(temp>=0)
                    ans += m[temp];
            }
        }
        
        return ans;
    }
};