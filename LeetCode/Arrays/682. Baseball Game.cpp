class Solution {
public:
    int calPoints(vector<string>& ops) {
        int total = 0;
        vector<int> score;
        
        for(int i=0; i<ops.size(); i++) {
            if(ops[i] == "C") {
                total -= score[score.size()-1];
                score.pop_back();
            } else if(ops[i] == "D") {
                score.push_back(2*score[score.size()-1]);
                total += score[score.size()-1];
            } else if(ops[i] == "+") {
                score.push_back(score[score.size()-1]+score[score.size()-2]);
                total += score[score.size()-1];
            } else {
                score.push_back(stoi(ops[i]));
                total += stoi(ops[i]);
            }
        }
        
        return total;
    }
};