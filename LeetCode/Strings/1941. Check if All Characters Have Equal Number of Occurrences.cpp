class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> m;
        
        for(auto i : s) {
            m[i]++;
        }
        
        int cnt = m[s[0]];
        
        for(auto itr : m) {
            if(itr.second != cnt)
                return false;
        }
        
        return true;
    }
};