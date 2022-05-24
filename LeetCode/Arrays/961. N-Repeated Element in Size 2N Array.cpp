class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> s;
        int num;
        
        for(auto i : nums) {
            if(s.find(i) == s.end()) {
                s.insert(i);
            } else {
                num = i;
                break;
            }
        }
        
        return num;
    }
};