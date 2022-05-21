class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
           int ans=0, sum=0, count=0;
        
         for(int i=0; i<arr.size(); i++) {
             sum=0;
             count=0;
             for(int j=i; j<arr.size(); j++) {
                 sum+= arr[j];
                 count++;
                 if(count % 2 != 0) ans += sum; 
             }
         }
        
        return ans;
    }
};