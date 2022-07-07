class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length(), cnt=0;
        vector<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        for(int i=0; i<n/2; i++) {
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                cnt++;
            }
        }
        
        for(int i=n/2; i<n; i++) {
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                cnt--;
            }
        }
        
        if(cnt != 0)
            return false;
        
        return true;
    }
};