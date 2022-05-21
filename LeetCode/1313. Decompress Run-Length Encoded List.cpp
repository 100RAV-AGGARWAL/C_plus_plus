class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<vector<int>> temp;
        
        for(int i=0; i<n-1; i=i+2) {
            vector<int> k;
            k.push_back(nums[i+1]);
            k.push_back(nums[i]);
            temp.push_back(k);
        }
        
        for(int i=0; i<temp.size(); i++) {
            int value = temp[i][0];
            int freq = temp[i][1];
            
            for(int j=0; j<freq; j++) ans.push_back(value);
        }
        
        return ans;
    }
};