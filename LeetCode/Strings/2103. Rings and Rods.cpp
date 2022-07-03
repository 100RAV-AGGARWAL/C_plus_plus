class Solution {
public:
    int countPoints(string rings) {
        vector<bool> red(10, false), green(10, false), blue(10, false);
        
        for(int i=0; i<rings.length(); i+=2) {
            if(rings[i] == 'R') {
                red[rings[i+1] - '0'] = true;
            } else if(rings[i] == 'G') {
                green[rings[i+1] - '0'] = true;
            } else {
                blue[rings[i+1] - '0'] = true;
            }
        }
        
        int count=0;
        for(int i=0; i<10; i++) {
            if(red[i] == true && green[i] == true && blue[i] == true) {
                count++;
            }
        }
        
        return count;
    }
};