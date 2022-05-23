class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> ref{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(auto i : words) {
            string word = "";
            for(auto j : i) {
                word += ref[j-'a'];
            }
            
            s.insert(word);
        }
        
        return s.size();
    }
};