class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int trim = 0.05 * n;
        double ans = 0;
        
        sort(arr.begin(), arr.end());
        
        for(int i=trim; i<(n-trim); i++) {
            ans += arr[i];
        }
        
        return ans / (n-2*trim);
    }
};