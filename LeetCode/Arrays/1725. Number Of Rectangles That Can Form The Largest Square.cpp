class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxlen = 0;
        int count = 0;
        
        for(auto i : rectangles) {
            int len = min(i[0], i[1]);
            
            if(maxlen == len) {
                count++;
            } else if(maxlen < len) {
                maxlen = len;
                count = 1;
            }
        }
        
        return count;
    }
};