class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, en = s.length()-1;
        
        while(st < en) {
            if(s[st] != s[en]) {
                return false;
            }
            
            st++;
            en--;
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            if(isPalindrome(words[i]) == true)
                return words[i];
        }
        
        return "";
    }
};