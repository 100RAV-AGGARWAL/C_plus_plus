class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n = command.length();
        
        for(int i=0; i<n-1; i++) {
            if(command[i] == 'G') {
                ans += "G";
            } else if(command[i] == '(' && command[i+1] == ')') {
                ans += "o";
                i++;
            } else if(command[i] == '(' && command[i+1] == 'a') {
                ans += "al";
                i += 2;
            }
        }
        
        if(command[n-1] == 'G') ans+= "G";
        
        return ans;
    }
};