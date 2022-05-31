class Solution {
public:
    static unordered_map<char, int> countFreq(string s) {
        unordered_map<char, int> m;
        
        for(auto i : s) {
            m[i]++;
        }
        
        return m;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charF = countFreq(chars);
        int ans=0;
        
        for(auto i : words) {
            unordered_map<char, int> wordF = countFreq(i);
            bool flag=true;
            
            for(auto j : i) {
                if(charF[j] < wordF[j]) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) ans += i.length();
        }
        
        return ans;
    }
};