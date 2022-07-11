class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans=0;
        int n = s.length();
        
        for(auto i : s) {
            if(i == letter)
                ans++;
        }
        
        return (ans * 100)/n;
    }
};