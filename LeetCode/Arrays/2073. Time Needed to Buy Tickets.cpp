class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        int n = tickets.size();
        
        for(int i=0; i<n; i++) {
            if(i<=k) {
                if(tickets[i]>=tickets[k])
                    time += tickets[k];
                else
                    time += tickets[i];
            } else {
                if(tickets[i] < tickets[k])
                    time += tickets[i];
                else
                    time += tickets[k] - 1;
            }
        }
        
        return time;
    }
};