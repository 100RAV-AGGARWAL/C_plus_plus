class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        
        unordered_map<int, int> s;
        
        for(int i=0; i<nums.size(); i++) {
            if(s.find(temp[i]) == s.end())
                s.insert({temp[i], i});
        }
        
        for(int i=0; i<nums.size(); i++) {
            temp[i] = s.at(nums[i]);
        }
        
        return temp;
    }
};