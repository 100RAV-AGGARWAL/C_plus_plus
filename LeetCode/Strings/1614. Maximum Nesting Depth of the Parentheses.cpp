class Solution {
public:
    int maxDepth(string s) {
        int count = 0, maxCount=0;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '(') {
                count++;
                maxCount = max(count, maxCount);
            }
            
            if(s[i] == ')') {
                count--;
            }
        }
        
        return maxCount;
    }
};