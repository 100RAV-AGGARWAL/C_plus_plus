class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count = 0;
        int rooki=0, rookj=0;
        
        int flag=0;
        
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                if(board[i][j] == 'R') {
                    rooki = i;
                    rookj = j;
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        
        for(int i=rooki; i>=0; i--) {
            if(board[i][rookj] == 'B') break;
            if(board[i][rookj] == 'p') {count++; break;}
        }
        
        for(int i=rooki; i<8; i++) {
            if(board[i][rookj] == 'B') break;
            if(board[i][rookj] == 'p') {count++; break;}
        }
        
        for(int i=rookj; i>=0; i--) {
            if(board[rooki][i] == 'B') break;
            if(board[rooki][i] == 'p') {count++; break;}
        }
        
        for(int i=rookj; i<8; i++) {
            if(board[rooki][i] == 'B') break;
            if(board[rooki][i] == 'p') {count++; break;}
        }
        
        return count;
    }
};