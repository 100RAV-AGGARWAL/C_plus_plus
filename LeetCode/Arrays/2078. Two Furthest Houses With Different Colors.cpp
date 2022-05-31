class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int start=0, end=colors.size()-1, n=colors.size();
        
        if(colors[start] != colors[end]) {
            return end;
        } else {
            start=0, end=0;
            
            for(int i=0; i<n; i++) {
                if(colors[i] != colors[0]) {
                    start = i;
                    end = max(end, n-start-1);
                }
            }
            
            return max(start, end);
        }
    }
};