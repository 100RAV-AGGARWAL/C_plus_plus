class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int m = word1.length(), n = word2.length();
        
        int i=0, j=0, k=0;
        
        while(i<m && j<n) {
            if(k==0) {
                ans += word1[i];
                i++;
                k=1;
            } else {
                ans += word2[j];
                j++;
                k=0;
            }
        }
        

        for(; j<n; j++) {
            ans += word2[j];
        }
        
        for(; i<m; i++) {
            ans += word1[i];
        }
        
        return ans;
    }
};