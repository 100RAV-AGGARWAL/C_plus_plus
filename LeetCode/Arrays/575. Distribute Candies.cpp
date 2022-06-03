class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int rest = candyType.size() / 2;
        
        for(auto i : candyType) {
            s.insert(i);
            
            if(s.size() >= rest) return rest;
        }
        
        return s.size();
    }
};