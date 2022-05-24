class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        bool flag = true;
        
        for(int i=0; i<prices.size(); i++) {
            flag = true;
            
            for(int j=i+1; j<prices.size(); j++) {
                if(prices[j] <= prices[i]) {
                    ans[i] = prices[i]-prices[j];
                    flag = false;
                    break;
                }
            }
            
            if(flag)
                ans[i] = prices[i];
        }
        
        return ans;
    }
};