class Solution {
public:
    static bool isPalindrome(string s) {
        int st=0, e=s.length()-1;
        
        while(st<e) {
            if(s[st]!=s[e]) return false;
            st++;
            e--;
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            if(isPalindrome(words[i]) == true) return words[i];
        }
        
        return "";
    }
};