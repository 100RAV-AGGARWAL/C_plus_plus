class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        
        int permit = 0.25 * n;
        int count=1;
        
        for(int i=1; i<n; i++) {
            if(arr[i] == arr[i-1]) {
                count++;
            } else {
                if(count > permit) return arr[i-1];
                
                count=1;
            }
        }
        
        if(count > permit) return arr[n-1];
        
        return -1;
    }
};