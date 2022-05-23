class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0, net=0;
        
        for(int i=0; i<gain.size(); i++) {
            net += gain[i];
            highest = max(highest, net);
        }
        
        return highest;
    }
};