class Solution {
public:
    bool digitCount(string num) {
        map<char, int> m;
        
        for(auto i : num) {
            m[i]++;
        }
        
        for(int i=0; i<num.length(); i++) {
            if(m[i + '0'] != num[i] - '0')
                return false;
        }
        
        return true;
    }
};