class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        
        for(auto n : nums) {
            int digits = 0;
            for(int i=1; ; i*=10) {
                if(n / i != 0) digits++;
                else break;
            }
            
            if(digits % 2 == 0) count++;
        }
        
        return count;
    }
};