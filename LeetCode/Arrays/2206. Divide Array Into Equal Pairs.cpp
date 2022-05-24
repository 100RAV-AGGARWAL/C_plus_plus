class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for(auto i : nums) {
            m[i]++;
        }
        
        for(auto itr : m) {
            if(itr.second % 2 != 0) return false;
        }
        
        return true;
    }
};