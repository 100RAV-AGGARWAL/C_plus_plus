class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = nums3.size();
        
        set<int> s1, s2, s3;
        unordered_map<int, int> m;
        vector<int> ans;
        
        for(auto i : nums1) {
            s1.insert(i);
        }
        
        for(auto i : nums2) {
            s2.insert(i);
        }
        
        for(auto i : nums3) {
            s3.insert(i);
        }
        
        for(auto i : s1) {
            m[i]++;
        }
        
        for(auto i : s2) {
            m[i]++;
        }
        
        for(auto i : s3) {
            m[i]++;
        }
        
        for(auto i : m) {
            if(i.second >= 2) ans.push_back(i.first);
        }
        
        return ans;
    }
};