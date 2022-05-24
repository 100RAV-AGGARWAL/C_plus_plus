class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int end = nums.size()-1;
        
        for(int i=0; i<=end; ) {
            if(nums[i] % 2 != 0) {
                swap(nums[i], nums[end]);
                end--;
            } else {
                i++;
            }
        }
        
        return nums;
    }
};