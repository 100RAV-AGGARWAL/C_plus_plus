class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        
        vector<int> ans(n);
        
        for(int i=0; i<n; i++) {
            int sum = 0, temp=k, j;
            
            if(k>0) {
                j = i+1;
                while(temp--) {
                    if(j>=n) {
                        j=0;
                    }
                    
                    sum += code[j++];
                }
            } else if(k==0) {
                sum = 0;
            } else {
                j = i-1;
                temp = abs(k);
                while(temp--) {
                    if(j<0) {
                        j=n-1;
                    }
                    
                    sum += code[j--];
                }
            }
            
            ans[i] = sum;
        }
        
        return ans;
    }
};