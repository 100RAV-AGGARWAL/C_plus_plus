class Solution {
public:
    vector<int> sumZero(int n) {
        int mid = n/2;
        vector<int> ans(n);
        
        for(int i=0; i<mid; i++) {
            ans[i] = i-mid;
            ans[n-i-1] = mid-i;
        }
        
        return ans;
    }
};