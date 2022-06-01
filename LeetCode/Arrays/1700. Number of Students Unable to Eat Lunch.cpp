class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans=0, unable=0;
        
        while(students.size()) {
            if(students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                unable=0;
            } else {
                if(unable == students.size()) break;
                int k = students[0];
                students.erase(students.begin());
                students.push_back(k);
                unable++;
            }
        }
        
        return students.size();
    }
};