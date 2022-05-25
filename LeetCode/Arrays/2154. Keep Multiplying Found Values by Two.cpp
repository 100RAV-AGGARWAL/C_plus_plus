class Solution {
public:
    static bool binarySearch(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        
        while(start<=end) {
            int mid = (start+end)/2;
            
            if(nums[mid] == target) {
                return true;
            } else if(nums[mid] < target) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        
        return false;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        while(1) {
            if(binarySearch(nums, original)) original *=2;
            else break;
        }
        
        return original;
    }
};