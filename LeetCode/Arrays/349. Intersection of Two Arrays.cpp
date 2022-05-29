class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s, s2;
        
        for(auto i : nums1) {
            s.insert(i);
        }
        
        for(auto i : nums2) {
            if(s2.find(i) == s2.end() && s.find(i) != s.end()) {
                s2.insert(i);
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};