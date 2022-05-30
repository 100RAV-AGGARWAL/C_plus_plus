class Solution {
public:
    static bool sortCol(vector<int> v1, vector<int> v2) {
        if(v1[1] < v2[1]) {
            return true;
        } else if(v1[1] == v2[1] && v1[0] > v2[0]){
            return true;
        }
        return false;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<vector<int>> temp;
        vector<int> ans;
        
        for(auto i : nums) m[i]++;
        
        for(auto itr : m) {
            temp.push_back({itr.first, itr.second});
        }
        
        sort(temp.begin(), temp.end(), sortCol);
        
        for(auto i : temp) {
            while(i[1]--)
            ans.push_back(i[0]);
        }
        
        return ans;
    }
};