class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        map<int, int> m1;
        int n2 = nums2.size();
        
        for(auto i : nums1) {
            m1[i]++;
        }
        
        for(int i=0; i<n2; i++) {
            if(m1.find(nums2[i]) != m1.end()) {
                if(m1[nums2[i]] > 0) {
                    ans.push_back(nums2[i]);
                    m1[nums2[i]]--;
                }
            }
        }
        
        return ans;
    }
};