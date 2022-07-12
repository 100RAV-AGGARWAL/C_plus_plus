class Solution {
public:
    int minTimeToType(string word) {
        char pointer = 'a';
        int time = word.length();
        
        for(auto i : word) {
            if(abs(i - pointer) <= 13) {
                time += (abs(i-pointer));
                pointer = i;
            } else {
                time += (26 - abs(i - pointer));
                pointer = i;
            }
        }
        
        return time;
    }
};