class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int largest = -1, n = arr.size();
        vector<int> ans(n);
        
        for(int i=n-1; i>=0; i--) {
            int temp = arr[i];
            ans[i] = largest;
            largest = max(largest, temp);
        }
        
        return ans;
    }
};