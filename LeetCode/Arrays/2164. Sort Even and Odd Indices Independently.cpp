class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even, ans(nums.size());
        
        for(int i=0; i<nums.size(); i++) {
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        
        int k=0;
        for(int i=0; i<even.size(); i++) {
            ans[k] = even[i];
            k+=2;
        }
        k=1;
        for(int i=0; i<odd.size(); i++) {
            ans[k] = odd[i];
            k+=2;
        }
        
        return ans;
    }
};