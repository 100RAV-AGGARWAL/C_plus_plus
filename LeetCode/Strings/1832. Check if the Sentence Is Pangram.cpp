class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26, false);
         
        for(char i : sentence) {
            alpha[i - 'a'] = true;
        }
        
        for(bool i : alpha) {
            if(i == false)
                return false;
        }
        
        return true;
    }
};