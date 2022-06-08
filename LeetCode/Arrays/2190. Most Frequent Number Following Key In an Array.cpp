class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;
        
        for(int i=0; i<nums.size()-1; ++i) {
            if(nums[i] == key) {
                freq[nums[i+1]]++;
            }
        }
        
        int maxF=0, ans=0;
        
        for(auto itr : freq) {
            if(itr.second > maxF) {
                maxF = itr.second;
                ans = itr.first;
            }
        }
        
        return ans;
    }
};