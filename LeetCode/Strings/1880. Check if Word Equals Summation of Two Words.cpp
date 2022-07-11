class Solution {
public:
    int summation(string s) {
        int ans=0;
        
        for(int i=0; i<s.length(); i++) {
            ans = ans * 10 + s[i]-'a';    
        }
        
        return ans;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(summation(firstWord) + summation(secondWord) == summation(targetWord))
            return true;
        
        return false;
    }
};