class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time=0, n=timeSeries.size();
        
        for(int i=0; i<n-1; i++) {
            if(timeSeries[i]+duration-1 >= timeSeries[i+1]) {
                time += (timeSeries[i+1]-timeSeries[i]);
            } else {
                time += duration;
            }
        }
        
        time += duration;
        
        return time;
    }
};