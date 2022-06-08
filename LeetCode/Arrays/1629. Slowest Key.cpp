class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans=keysPressed[0];
        int maxDur=releaseTimes[0];
        
        for(int i=1; i<releaseTimes.size(); i++) {
            if(releaseTimes[i]-releaseTimes[i-1] > maxDur){
                maxDur = releaseTimes[i]-releaseTimes[i-1];
                ans = keysPressed[i];
            } else if(releaseTimes[i]-releaseTimes[i-1] == maxDur) {
                if(keysPressed[i] > ans)
                    ans = keysPressed[i];
            }
        }
        
        return ans;
    }
};