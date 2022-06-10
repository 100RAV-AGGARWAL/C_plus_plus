class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        unordered_map<int, int> year_to_people;
        for (auto i = 0; i < logs.size(); ++i) {
            auto birth = logs[i][0];
            auto death = logs[i][1];
            for (auto j = birth; j < death; ++j) {
                year_to_people[j]++;
            }
        }
        int result = 1e5, maximum = 0;
        for (auto& ytp : year_to_people) {
            if (maximum <= ytp.second) {                
                if (maximum == ytp.second) {
                    result = min(result, ytp.first);
                } else {
                    result = ytp.first;
                }
                maximum = ytp.second;
            }
        }
        return result;
    }
};