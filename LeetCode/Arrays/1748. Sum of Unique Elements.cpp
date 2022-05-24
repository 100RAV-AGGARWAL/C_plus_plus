class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        int sum=0;
         
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]]++;
        }
        
        for(auto itr : m) {
            if(itr.second == 1) {
                sum += itr.first;
            }
        }
        
        return sum;
    }
};