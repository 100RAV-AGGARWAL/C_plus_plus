class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        vector<int> n1, n2;
        vector<vector<int>> ans;
        
        for(auto i : nums1) m1[i]++;
        for(auto i : nums2) m2[i]++;
        
        for(auto i : m1) {
            if(m2.find(i.first) == m2.end()) n1.push_back(i.first);
        }
        
        for(auto i : m2) {
            if(m1.find(i.first) == m1.end()) n2.push_back(i.first);
        }
        
        ans.push_back(n1);
        ans.push_back(n2);
        
        return ans;

    }
};