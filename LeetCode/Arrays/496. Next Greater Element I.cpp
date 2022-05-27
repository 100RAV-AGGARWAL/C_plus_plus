class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> temp = nums2;
        vector<int> ans;
        
        for(int i=0; i<nums2.size(); i++) {
            for(int j=i+1; j<nums2.size(); j++) {
                if(nums2[j] > nums2[i]) {
                    m[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        
        for(int i=0; i<nums1.size(); i++) {
            if(m[nums1[i]] > nums1[i]) ans.push_back(m[nums1[i]]);
            else ans.push_back(-1);
        }
        
        return ans;
    }
};