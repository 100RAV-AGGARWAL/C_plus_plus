class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int start = 0;
        
        for(auto word : words) {
            if(s.find(word, start) == start) {
                start += word.size();
                if(start == s.length())
                    return true;
            } else {
                return false;
            }
        }
        
        return false;
    }
};