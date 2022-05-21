class Solution {
public:
    void finalPos(vector<int> &ind) {
        for(int i=0; i<ind.size(); i++) {
            int indexIns = ind[i];
            for(int j=i; j>indexIns; j--) {
                ind[j] = ind[j-1];
            }
            ind[indexIns] = i;
        }    
    }
    
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        finalPos(index);
        vector<int> ans;
        for(int i=0; i<index.size(); i++) {
            ans.push_back(nums[index[i]]);
        }
        return ans;
    }
};