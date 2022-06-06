class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size() * (nums.size()+1) / 2;
        int calcSum=0;
        
        for(auto i: nums)
            calcSum += i;
        
        return sum - calcSum;
    }
};