class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();    
        int clk = 0, aclk=0;
        int i=start, j=start;
        
        while(i != destination || j != destination) {
            if(i != destination) {
                clk += distance[i];
                if(i == n-1) i=0;
                else i++;
            }
            
            if(j != destination) {
                if(j == 0) j = n-1;
                else j--;
                aclk += distance[j];
            }
            
            if(i == destination) {
                if(clk <= aclk) return clk;
            } else if( j+1 == destination) {
                if(aclk <= clk) return aclk;
            }
        }
        
        return min(clk, aclk);
    }
};