class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        map<char, int> m;
        
        for(int i=0; i<stones.length(); i++) {
            m[stones[i]]++;
        }
        
        for(int i=0; i<jewels.length(); i++) {
            if(m.find(jewels[i]) != m.end()) {
                ans += m[jewels[i]];
            }
        }
        
        return ans;
    }
};