class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();

        for(int i=0; i<=nums[n-1]; i++) {
            int cnt = 0, lo = 0, hi = n-1, mid;
            
            while(lo <= hi) {
                mid = (lo+hi)/2;

                if(nums[mid] >= i) 
                    cnt+=(hi-mid+1), hi=mid-1;
                else 
                    lo=mid+1;
            }
            
            if(i==cnt) return i;
        }
        
        return -1;
    }
};