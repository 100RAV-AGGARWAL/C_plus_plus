class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set first({'q','w','e','r','t','y','u','i','o','p'}), second({'a','s','d','f','g','h','j','k','l'}), third({'z','x','c','v','b','n','m'}) ;
        
        vector<string> ans;
        
        for(auto word : words) {
            char ch = tolower(word[0]);
            
            if(first.find(ch) != first.end()) {
                bool other = false;
                
                for(int i=1; i<word.length(); i++) {
                    ch = tolower(word[i]);
                    if(first.find(ch) == first.end()) {
                        other=true;
                        break;
                    }
                }
                
                if(other != true) {
                    ans.push_back(word);
                }
            } else if(second.find(ch) != second.end()) {
                bool other = false;
                
                for(int i=1; i<word.length(); i++) {
                     ch = tolower(word[i]);
                    if(second.find(ch) == second.end()) {
                        other=true;
                        break;
                    }
                }
                
                if(other != true) {
                    ans.push_back(word);
                }
            } else {
                bool other = false;
                
                for(int i=1; i<word.length(); i++) {
                     ch = tolower(word[i]);
                    if(third.find(ch) == third.end()) {
                        other=true;
                        break;
                    }
                }
                
                if(other != true) {
                    ans.push_back(word);
                }
            }
        }
        
        return ans;
    }
};