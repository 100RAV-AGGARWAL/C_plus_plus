class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> freqL(26, 0);
        
        for(auto i : licensePlate) {
            if(isalpha(i) && i != ' ')
                freqL[(tolower(i))-'a']++;
        }
        
        int ind=-1;
        
        for(int i=0; i<words.size(); i++) {
            vector<int> freqW(26, 0);
            int found = 1;
            
            for(auto c : words[i]) {
                freqW[(tolower(c)) - 'a']++;
            }
            
            for(int j=0; j<26; j++) {
                if(freqL[j] > freqW[j]) {
                    found=0;
                    break;
                }
            }
            
            if(found) {
                if(ind == -1) {
                    ind = i;
                } else {
                    if(words[ind].length() > words[i].length())
                        ind = i;
                }
            }
        }
        
        return words[ind];
    }
};