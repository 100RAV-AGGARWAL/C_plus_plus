class Solution {
public:  
    int canBeTypedWords(string text, string brokenLetters) {
        int flag=0, count=0;
        for(int i=0; i<text.length(); i++) {
            if(brokenLetters.find(text[i]) != string::npos && flag == 0) {
                flag = 1;
                continue;
            }
            
            if(text[i] == ' ') {
                if(flag == 0) count++;
                
                flag = 0;
            }
        }
        
        if(flag == 0) count++;
        
        return count;
    }
};