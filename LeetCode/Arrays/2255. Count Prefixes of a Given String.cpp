class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        
        for(auto i : words) {
            for(int j = 1; j<=s.length(); j++) {
                if(s.substr(0, j) == i) {
                    cnt++;
                    break;
                }
            }
        }
        
        return cnt;
    }
};