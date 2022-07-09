class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        
        for(auto i : moves) {
            if(i == 'U') {
                x--;
            } else if(i == 'D') {
                x++;
            } else if(i == 'R') {
                y++;
            } else {
                y--;
            }
        }
        
        if(x==0 && y==0)
            return true;
        
        return false;
    }
};