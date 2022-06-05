class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> m;
        int largest=-1;
        
        for(auto num : arr) {
            m[num]++;
        }
        
        for(auto itr : m) {
            if(itr.first == itr.second) {
                largest = max(largest, itr.first);
            }
        }
        
        return largest;
    }
};